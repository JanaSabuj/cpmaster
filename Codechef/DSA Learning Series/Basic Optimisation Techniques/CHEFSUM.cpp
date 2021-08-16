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

void solve() {
	int n;
	cin >> n;
	vi arr(n), pref(n), suff(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {
		pref[i] = (i == 0) ? arr[i] : pref[i - 1] + arr[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		suff[i] = (i == n - 1) ? arr[i] : arr[i] + suff[i + 1];
	}

	int mn = LLONG_MAX;
	for (int i = 0; i < n; ++i) {
		arr[i] = pref[i] + suff[i];
		mn = min(mn, arr[i]);
	}

	int idx = -1;
	for (int i = 0; i < n; ++i) {
		if (arr[i] == mn) {
			idx = i;
			break;
		}
	}

	cout << idx + 1 << endl;
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

/*
	pref[i] + suff[i] = SUM(arr) + arr[i]
*/