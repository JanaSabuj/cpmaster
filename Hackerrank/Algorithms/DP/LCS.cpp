
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

	int a1[n], b1[m];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a1[i];
	}

	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin >> b1[i];
	}

	int dp[n + 1][m + 1];

	for (int i = 0; i <= n; ++i)
	{
		/* code */

		for (int j = 0; j <= m; j++) {

			if (i == 0 or j == 0)
				dp[i][j] = 0;
			else {
				if (a1[i - 1] == b1[j - 1])
					dp[i][j] = 1 + dp[i - 1][j - 1];
				else
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}


	std::vector<int> vec;

	int i = n, j = m;

	while (i > 0 and j > 0) {

		if (a1[i - 1] == b1[j - 1]) {
			vec.push_back(b1[j-1]);
			i--;
			j--;

		}
		else {
			if(dp[i-1][j] > dp[i][j-1])
				i--;
			else
				j--;
		}

	}


    reverse(vec.begin(), vec.end());

    for(auto x:vec)
    	cout << x << " ";

    cout <<endl;



	return 0;
}





