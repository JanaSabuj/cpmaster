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

int binpow(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b /= 2;
	}

	return res;
}

int getVal(int x) {
	if (x == 0)
		return 0;
	int p = log2(x);
	return binpow(2, p + 1) - 1;
}

int drop(int n) {
	string ans = "";
	while (n) {
		int dig = n % 2;
		ans += to_string(dig);
		n /= 2;
	}

	int req = 0;
	for (int i = 0; i < ans.size(); i++) {
		if (ans[i] == '1')
			req += getVal(binpow(2, i));
	}

	return req;
}

void solve() {
	int n;
	cin >> n;

	cout << drop(n) << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin >> t;

	while (t--) {
		solve();
	}


	return 0;
}
