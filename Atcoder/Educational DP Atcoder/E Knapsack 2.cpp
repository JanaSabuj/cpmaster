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

	int n, w;
	cin >> n >> w;
	 
	vector<int> wt(n), val(n);

	int total = 0;
	for (int i = 0; i < n; ++i) {
		cin >> wt[i] >> val[i];
		total += val[i];
	}


	int mx = total + 1;
	int dp[n + 1][mx];

	for (int i = 0; i < n + 1; ++i) {
		for (int j = 0; j < mx + 1; ++j) {
			if (i == 0 and j == 0)
				dp[i][j] = 0;
			else if (i == 0)
				dp[i][j] = INT_MAX;
			else if (j == 0)
				dp[i][j] = 0;
			else if (val[i - 1] <= j)
				dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - val[i - 1]] + wt[i - 1]);
			else
				dp[i][j] = dp[i - 1][j];

		}
	}

	int ans = 0;
	 
	for (int j = 0 ; j < mx; j++) {
		if (dp[n][j] <= w)
			ans = j;
	}

	cout << ans << endl;


	return 0;
}