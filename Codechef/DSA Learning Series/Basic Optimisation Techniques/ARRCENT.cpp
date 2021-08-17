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
const int N = 0;
const int mod = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vi arr(n, 0), pref(n, 0), suff(n, 0);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	// pref sums
	for (int i = 0; i < n; i++) {
		if (i == 0)
			pref[i] = arr[i];
		else
			pref[i] = (pref[i - 1] + arr[i]) % mod;
	}

	for (int j = 0; j < 3; ++j) {
		for (int i = 0; i < n; ++i) {
			if (i == 0)
				pref[i] = arr[i];
			else
				pref[i] = (pref[i - 1] + pref[i]) % mod;
		}
	}

	// suffix sums
	for (int i = n - 1; i >= 0; --i) {
		if (i == n - 1)
			suff[i] = arr[i];
		else
			suff[i] = (suff[i + 1] + arr[i]) % mod;
	}

	for (int j = 0; j < 3; ++j) {
		for (int i = n - 1; i >= 0; --i) {
			if (i == n - 1)
				suff[i] = arr[i];
			else
				suff[i] = (suff[i + 1] + suff[i]) % mod;
		}
	}

	for (int i = 0; i < n; ++i) {
		int l = (i == 0 ? 0 : pref[i - 1]);
		int r = (i == n - 1 ? 0 : suff[i + 1]);
		cout << ((l + r) % mod) << " ";
	}
	cout << endl;

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