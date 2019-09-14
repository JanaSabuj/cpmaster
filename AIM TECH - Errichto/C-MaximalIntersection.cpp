
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
    
	// freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin>>n;

	int t = n;
	int segX[n+2];
	int segY[n+2];

	int preX[n+2];
	int preY[n+2];// Y - rightmost point

	int sufX[n+2];
	int sufY[n+2];

	for (int i = 1; i <= n; ++i)
	{
		/* code */
		int x,y;
		cin>>x>>y;

		segX[i] = x;
		segY[i] = y;

	}

	preX[0] = 0;
	sufX[n+1] = 0;

	for (int i = 1; i <= n; ++i)
	{
		/* code */ 
		preX[i] = max(preX[i-1], segX[i]);
	}

	for(int i=n; i>=1; i--){
		sufX[i] = max(sufX[i+1], segX[i]);
	}

	preY[0] = LLONG_MAX;
	sufY[n+1] = LLONG_MAX;

	for (int i = 1; i <= n; ++i)
	{
		/* code */ 
		preY[i] = min(preY[i-1], segY[i]);
	}

	for(int i=n; i>=1; i--){
		sufY[i] = min(sufY[i+1], segY[i]);
	}

	int ans = 0;

	for (int i = 1 ; i <= n; ++i)
	{
		/* code */
		ans = max(ans, min(preY[i-1], sufY[i+1]) - max(preX[i-1], sufX[i+1]));
	}

	cout << ans <<endl;


 	
 	

	return 0;
}




