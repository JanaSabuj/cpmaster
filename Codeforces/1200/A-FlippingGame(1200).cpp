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
    int arr[n+7];
    for(int i=1; i<=n; i++){
		
		cin>>arr[i];		
	}
    
    int dp[n+7];
    memset(dp,0,sizeof(dp));
    //~ cout<<dp[2]<<endl;
    //~ dp[0]=0;
    for(int i=1; i<=n; i++){
		
		dp[i]=dp[i-1]+arr[i];
	}
	
	int ans=dp[n];
	int mymax=0;
	//~ cout<<ans<<endl;
	
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
				int ones=dp[j]-dp[i-1];
				int nos=j-i+1;
				int zeroes=nos-ones;
				int tempans= ans+zeroes-ones;
				mymax=max(tempans,mymax);
			
		}
	}
     
     cout<<mymax<<endl;
     
    return 0;
 }

