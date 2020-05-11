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

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int n;
	cin >> n;
	double heads[n], tails[n];
	for (int i = 0; i < n; ++i) {
		cin >> heads[i];
		tails[i] = 1 - heads[i];
	}

	double dp[n + 1][n + 1];

	for (int i = 0; i < n + 1; ++i) {
		for (int j = 0; j < n + 1; ++j) {
			if (i == 0 and j == 0)
				dp[i][j] = 1.0;
			else if (i == 0)
				dp[i][j] = 0.0;
			else if (j == 0)
				dp[i][j] = dp[i - 1][j] * tails[i - 1];
			else {
				dp[i][j] = dp[i - 1][j] * tails[i - 1] + dp[i - 1][j - 1] * heads[i - 1];
			}
		}
	}

	double ans = 0.0;
	int coins = n;

	for (int j = 0; j < n + 1; ++j) {
		int heads = j;
		int tails = coins - heads;

		if (heads > tails and tails >= 0 and heads >= 0)
			ans += dp[n][j];
	}

	cout << fixed << showpoint << setprecision(12) << ans << endl;
	return 0;
}
