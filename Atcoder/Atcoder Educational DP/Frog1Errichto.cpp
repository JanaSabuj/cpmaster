//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 //~ #define INF LLONG_MAX
 #define pb push_back
 #define mp make_pair
 const int INF= 1e9+5;
 typedef vector<int> vi;
 typedef long long ll;
 
 	 
 int main() {
 	freopen("input.txt", "r", stdin);
    crap;
                  
     int n;cin>>n;
     vi vec(n);
     for(int& x: vec)
		cin>>x;
		
	vi dp(n,INF);
	dp[0]=0;
	for(int i=0; i<n; i++){
		
		for(int j: {i+1,i+2}){
			if(j<n)
			dp[j]=min(dp[j], dp[i]+ abs(vec[i]-vec[j]));
			
		}
		
		
	}
     
      cout<<dp[n-1];
    return 0;
 }

