/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
//
//		  _____       _           _        _
//		 / ____|     | |         (_)      | |
//		| (___   __ _| |__  _   _ _       | | __ _ _ __   __ _
//		 \___ \ / _` | '_ \| | | | |  _   | |/ _` | '_ \ / _` |
//		 ____) | (_| | |_) | |_| | | | |__| | (_| | | | | (_| |
//		|_____/ \__,_|_.__/ \__,_| |  \____/ \__,_|_| |_|\__,_|
//		                        _/ |
//		                       |__/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define int long long int
#define double long double
#define PI acos(-1)
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

int power(int a, int b) {
	int ans = 1;
	while (b) {
		if (b & 1)
			ans = (ans * a);
		a = a * a;
		b /= 2;
	}

	return ans;
}

void solve(int tc) {
	int n, x;
	cin >> n >> x;

	int mx = 6 * n ;
	int dp[n + 1][mx + 1];

	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= mx; j++) {
			if (i == 1) {
				if (j <= 6)
					dp[i][j] = 1;
			}
			else {
				for (int k = 1; k <= 6 and k < j; k++)
					dp[i][j] += dp[i - 1][j - k];
			}

		}
	}

	int cnt = 0;
	for (int j = x; j <= mx; j++)
		cnt += dp[n][j];

	int total = power(6, n);

	int common = __gcd(total, cnt);
	int num = cnt / common;
	int den = total / common;

	if (den != 1)
		cout << "Case " << tc << ": " << cnt / common << "/" << total / common  << endl;
	else
		cout << "Case " << tc << ": " << cnt / common << endl;

}


signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin >> t;
	int tc = 0;

	while (t--) {
		solve(++tc);
	}


	return 0;
}
