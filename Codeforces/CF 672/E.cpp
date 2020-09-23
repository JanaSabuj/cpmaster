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

void solve() {
	int n;
	cin >> n;

	// get all the prime factors of n
	vi primes;
	int total = n;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i) continue;
		primes.push_back(i);
		while (n % i == 0) {
			n /= i;
		}
	}

	if (n > 1)
		primes.push_back(n);


	// get all the divisors of n
	set<int> divisors;
	n = total;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i) continue;
		if (n / i == i)
			divisors.insert(i);
		else {
			divisors.insert(i);
			divisors.insert(n / i);
		}
	}

	divisors.erase(1);

	// when 2 primes exact
	int sz = primes.size();

	if (sz == 1) {
		for (auto x : divisors)
			cout << x << " ";
		cout << endl;
		cout << 0 << endl;
	} else if (sz == 2) {
		if (primes[0] * primes[1] == total) {
			cout << primes[0] << " " << primes[0]*primes[1] << " " << primes[1] << endl;
			cout << 1 << endl;
		} else {
			int a = primes[0];
			int b = primes[0] * primes[1];
			int c = primes[1];
			int d = total;

			divisors.erase(a);
			divisors.erase(b);
			divisors.erase(c);
			divisors.erase(d);

			cout << a << " ";
			vi temp;
			for (auto p : divisors)
				if (p % primes[0] == 0) {
					// divisors.erase(p);
					temp.push_back(p);
					cout << p << " ";
				}

			for (auto p : temp)
				divisors.erase(p);

			cout << b << " " <<  c << " ";

			temp.clear();

			for (auto p : divisors)
				if (p % primes[1] == 0) {
					// divisors.erase(p);
					temp.push_back(p);
					cout << p << " ";
				}

			for (auto p : temp)
				divisors.erase(p);

			cout << d << endl;
			cout << 0 << endl;
		}
	} else {
		// when > 2 primes
		for (int i = 0; i < sz; i++) {
			divisors.erase(primes[i]);
		}

		for (int i = 0; i < sz; i++) {
			divisors.erase(primes[i] * primes[(i + 1) % sz]);
		}

		// divisors.erase(total);

		int idx = 0;
		vi temp;
		for (auto pi : primes) {
			cout << pi << " ";

			temp.clear();
			for (auto x : divisors) {
				if (x % pi == 0) {
					cout << x << " ";
					// divisors.erase(x);
					temp.push_back(x);
				}
			}

			for (auto p : temp)
				divisors.erase(p);

			cout << primes[idx] * primes[(idx + 1) % sz] << " ";
			idx++;
		}

		// cout << total << endl;
		cout << endl;
		cout << 0 << endl;
	}
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
