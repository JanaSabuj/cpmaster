 //Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
     string dummy;
     dummy="l";
     string x;
     cin>>x;
     dummy+=x;
     
     int sz=dummy.length();
     int dp[sz+7];
     //~ cout<<dummy[1];
     dp[0]=0;
     for(int i=1; i<sz; i++){
		int k=0;
		if(dummy[i]==dummy[i+1])
			k=1;
			
		 dp[i]=dp[i-1]+k;
		 		 
	 }
	 
	 
	 int m;
	 cin>>m;
	 while(m--){
		 
		 int i,j;
		 cin>>i>>j;
		 cout<<dp[j-1]-dp[i-1]<<endl;
		 
	 }
     
    return 0;
 }

