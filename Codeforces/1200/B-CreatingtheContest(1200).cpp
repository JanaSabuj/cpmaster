//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	  int n;
	cin>>n;
	
	  int arr[n];
	for( int i=0; i<n; i++){
		
		cin>>arr[i];
		
	}
	
	int dp[n];
	dp[0]=1;
	for(int i=1; i<n ; i++){
		
		if(arr[i]<= 2*arr[i-1])
			dp[i]= dp[i-1]+1;
		else
			dp[i]=1;
				
	}
     
     sort(dp, dp+n);
     cout<<dp[n-1]<<endl;
     
    return 0;
 }

