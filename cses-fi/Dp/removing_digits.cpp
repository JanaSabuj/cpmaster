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

const int lim = 1e6 + 7;
int dp[lim];

vi getDigits(int t) {
	vi digs;
	while (t) {
		int d = t % 10;
		t /= 10;

		digs.push_back(d);
	}
	return digs;
}
int steps(int store) {

	// base
	if (store < 0)
		return lim;

	if (store == 0)
		return 0;
	//

	if (dp[store] != -1 )
		return dp[store];
	vi digs = getDigits(store);

	int nix = lim;
	for (auto x : digs) {
		if (x == 0)
			continue;
		int c = 1 + steps(store - x);
		nix = min(nix, c);
	}

	return dp[store] = nix;
}

void solve() {
	int n;
	cin >> n;

	memset(dp, -1, sizeof(dp));
	int ways = steps(n);
	cout << ways << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	solve();


	return 0;
}
