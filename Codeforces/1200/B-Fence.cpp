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
     int k;
     cin>>k;
     int arr[n+7];
     int dp[n+7];
     //~ int sum=0;
     dp[0]=0;
     for(int i=1; i<=n; i++){
		 
		 cin>>arr[i];
		 //~ sum+=arr[i];
		 dp[i]=dp[i-1]+arr[i];
	 }
	 
	 int i=1,j=k;
	 int ansval=INT_MAX,ansidx=1;
	 while(j<=n){
		 
		 int sum= dp[j]-dp[i-1];
		 if(sum<ansval)
			{
				ansval=sum;
				ansidx=i;
			}
			i++;
			j++;
	 }
	 
	 
         cout<<ansidx<<endl;
     
    return 0;
 }

