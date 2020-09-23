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
#define endl "\n"

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

	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	if (n == 1) {
		cout << 0 << endl;
		cout << arr[0] << endl;
		return 0;
	}

	sort(arr.begin(), arr.end());


	vi dp(n);
	int i = 1;
	int cnt = 0;

	while (cnt < n) {
		dp[i] = arr[cnt];
		i += 2;
		if (i >= n) {
			i = 0;
		}
		cnt++;
	}

	// print1d(dp);

	int cnts = 0;
	for (int i = 1; i < n - 1; ++i) {
		if (dp[i] < dp[i - 1] and dp[i] < dp[i + 1])
			cnts++;
	}

	cout << cnts << endl;

	print1d(dp);

	return 0;
}