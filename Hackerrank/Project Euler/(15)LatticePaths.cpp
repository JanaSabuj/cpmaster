
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin>>t;
	int MOD = 1000000007;

	int dp[500][500];
	dp[0][0]=2;
	for (int i = 1; i < 500; ++i)
	{
		/* code */
		dp[i][0] = (1 + dp[i-1][0])%MOD;
	}


	for(int j=1; j<500; j++){
		dp[0][j]=(1 + dp[0][j-1])%MOD;
	}

	for (int i = 1; i < 500; ++i)
	{
		/* code */

		for(int j=1; j<500; j++){
			dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
		}
	}





	while(t--){

		int n,m;
		cin>>n>>m;

		cout<< dp[n-1][m-1] <<endl;

	}
 	
 	

	return 0;
}




