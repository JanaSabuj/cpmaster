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

const int p = 1e9 + 7;
const int lim = 1e6 + 7;
int fac[lim];

void preprocess() {
	fac[0] = 1;
	for (int i = 1; i <= lim; i++) {
		fac[i] = (fac[i - 1] * i) % p;
	}
}

int power(int a, int b, int m) {
	a = a % m;
	int ans = 1;
	while (b) {
		if (b & 1)
			ans = (ans * a) % m;
		a = (a * a) % m;
		b /= 2;
	}

	return ans;
}

int inverse(int a, int p) {
	// a^-1 mod p -> Fermat
	return power(a, p - 2, p);
}

int ncrmod(int n, int r, int p) {
	return (fac[n] % p * inverse(fac[r], p) % p * inverse(fac[n - r], p) % p) % p;
}

void solve(int tc) {
	int n;
	cin >> n;

	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	vi dp(n);
	dp[0] = 1;
	int places = arr[0];
	for (int i = 1; i < n; i++) {
		places += arr[i];

		dp[i] = (dp[i - 1] % p * ncrmod(places - 1, arr[i] - 1, p)) % p;
	}

	cout << "Case " << tc << ": " << dp[n - 1] << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin >> t;

	preprocess();// fac
	int tc = 0;
	while (t--) {
		solve(++tc);
	}


	return 0;
}
