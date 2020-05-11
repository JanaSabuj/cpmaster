//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 // #define INF LLONG_M
 #define pb push_back
 #define mp make_pair
 const int INF=1e9+5; //billion
 typedef vector<int> vi;
 typedef long long ll;
 
 	 
 int main() {
 	freopen("input.txt", "r", stdin);
    crap;
     
     int n;
     cin>>n;
     
     int arr[n+7][3];
     
     for(int i=1; i<=n; i++){
		 
		 for(int j=0; j<3; j++){
			 
			 cin>>arr[i][j];
			 
		 }
		  
	 }
      
     int dp[n+1][3]={0};
      
      
      for(int i=1; i<=n; i++){
			
		 for(int j=0; j<3; j++){
			  
			 for(int k=0; k<3; k++){
				 
					if(j!=k)
						dp[i][j]=max( arr[i][j]+dp[i-1][k], dp[i][j] );
						
			 }
		 }
		
		  
	 } 
      
    cout<< max( dp[n][0], max( dp[n][1],dp[n][2] ) );
    
    return 0;
    
 }

