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

vi arr;
bool isPossible;
int mx;

const int N = 1e6 + 7;
int dp[N];

int minCoins(int store) {
	if (store == 0) {
		isPossible = true;
		return 0;
	}

	if (dp[store] != -1)
		return dp[store];

	int val = mx;
	int c;
	for (auto coin : arr) {
		if (store - coin >= 0) {
			c = 1 + minCoins(store - coin);
			val = min(val, c);
		}
	}

	return dp[store] =  val;
}

void solve() {
	int n, total;
	cin >> n >> total;

	vi a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	arr = a;
	isPossible = false;
	mx = total;
	memset(dp, -1, sizeof(dp));
	int cs = minCoins(total);

	if (isPossible)
		cout << cs << endl;
	else
		cout << -1 << endl;
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
