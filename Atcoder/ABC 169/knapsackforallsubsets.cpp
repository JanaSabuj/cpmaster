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

const int mod = 998244353;

int binpow(int a, int b, int m) {
	int res = 1;
	a = a % m;
	while (b) {
		if (b & 1)
			res = (res * a) % m;
		a = (a * a) % m;
		b /= 2;
	}

	return res;
}

void solve() {
	int n, sum;
	cin >> n >> sum;

	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int dp[n + 1][sum + 1];

	for (int i = 0; i < n + 1; ++i) {
		for (int j = 0; j < sum + 1; ++j) {
			if (i == 0 and j == 0)
				dp[i][j] = binpow(2, n, mod);
			else if (i == 0)
				dp[i][j] = 0;
			else if (arr[i - 1] <= j)
				dp[i][j] = ((dp[i - 1][j - arr[i - 1]] % mod * binpow(2, mod - 2, mod)) % mod  + dp[i - 1][j]) % mod;
			else
				dp[i][j] = dp[i - 1][j];

			cout << dp[i][j] << " ";
		}

		cout << endl;
	}

	cout << dp[n][sum] << endl;
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