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

const int N = 205;
bool composite[N];
vi primes;
vi semiprimes;
map<int, int> mp;

void preprocess() {
	for (int i = 2; i <= N; i++) {
		if (composite[i]) continue;
		primes.push_back(i);
		for (int j = i * i; j <= N; j += i)
			composite[j] = 1;
	}

	// print1d(primes);
	int k = primes.size();
	for (int i = 0; i < k; ++i) {
		for (int j = i + 1; j < k; j++) {
			int p1 = primes[i];
			int p2 = primes[j];
			mp[p1 * p2]++;
			semiprimes.push_back(p1 * p2);
		}
	}

}

void solve() {
	int n;
	cin >> n;

	int k = semiprimes.size();
	for (int i = 0; i < k; i++) {
		if (mp[n - semiprimes[i]]) {
			// cout << n << " = " << semiprimes[i] << " " << n - semiprimes[i] << endl;
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
	return;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin >> t;

	preprocess();

	while (t--) {
		solve();
	}

	return 0;
}
