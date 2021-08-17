/*
Sabuj Jana / @greenindia
https://www.janasabuj.github.io
*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define double long double
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define endl "\n"
void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}
void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

const int mod = 1e9 + 7;

int power(int a, int b, int p) {
	int res = 1;
	a %= p;
	while (b) {
		if (b & 1)
			res = res * a % p;
		a = a * a % p;
		b /= 2;
	}

	return res;
}

int invmodp(int a, int p) {
	return power(a, p - 2, p);
}

void solve() {
	int n, x, m;
	cin >> n >> x >> m;

	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		arr[i] = arr[i] % mod;
	}

	int ncr = 1;
	int sum = (ncr * arr[x - 1] % mod) % mod;

	int num = m % mod;
	int den = 1;

	for (int i = x - 1; i >= 1; --i) {

		ncr = ((ncr * num) % mod * invmodp(den, mod)) % mod;
		int aa = (ncr % mod * arr[i - 1]) % mod;
		sum = (sum + aa) % mod;

		num = (num + 1) % mod;
		den = (den + 1) % mod;
	}

	cout << sum << endl;
}

signed main() {
	crap;

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}