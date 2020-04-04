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
// #define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {

	// freopen("input.txt", "r", stdin);	
	crap;

	int n, m;
	cin >> n >> m;

	int A[n], B[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> A[i];
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> B[i];
	}

	int val = B[0];
	std::vector<int> X;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int temp = (val - A[i]) % m;
		if(temp < 0)
			temp += m;
		
		X.push_back(temp);
	}

	sort(B, B + n);
	int ans = INT_MAX;
	// cout << (-2)%3 <<endl;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int x = X[i];
		std::vector<int> vec;
		for (int j = 0; j < n; j++) {
			int temp = (A[j] + x) % m;
			vec.push_back(temp);
		}

		sort(vec.begin(), vec.end());

		int f = 1;
		for (int k = 0; k < n; ++k)
		{
			/* code */
			if(B[k] != vec[k])
				{
					f = 0;
					break;
				}
		}

		if(f)
			ans = min(ans,x);

	}

	cout << ans <<endl;

	return 0;
}