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

vi powers;
vi primes;

void pf(int n) {

	int x = sqrt(n);
	for (int i = 2; i <= x; i++) {
		if (n % i == 0) {
			// i is a prime factor
			int cnt = 0;
			while (n % i == 0) {
				n /= i;
				cnt++;
			}

			powers.push_back(cnt);
			primes.push_back(i);
		}
	}

	if (n > 1) {
		powers.push_back(1);
		primes.push_back(n);
	}

}

void solve() {
	int n;
	cin >> n;

	pf(n);

	// print1d(primes);
	// print1d(powers);

	vi prefix(40);
	prefix[0] = 0;
	for (int i = 1; i < 40; ++i) {
		prefix[i] = prefix[i - 1] + i;
	}

	int cnt = 0;
	for (auto x : powers) {
		auto idx = upper_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
		if (idx != 0) {
			idx--;
			cnt += idx;
		}
	}

	cout << cnt << endl;
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