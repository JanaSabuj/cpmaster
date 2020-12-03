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
	vi a(n), b(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int j = 0; j < n; ++j) {
		cin >> b[j];
	}

	vector<pair<int, int>> vec(n);
	for (int i = 0; i < n; ++i) {
		vec[i] = {a[i], b[i]};
	}

	sort(vec.begin(), vec.end());

	vi suff(n + 1, 0);
	for (int i = n - 1; i >= 0; i--) {
		if (i == n - 1)
			suff[i] = vec[i].second;
		else
			suff[i] = suff[i + 1] + vec[i].second;
	}

	int mix = INT_MAX;
	for (int i = 0; i < n; ++i) {
		mix = min(mix, max(vec[i].first, suff[i + 1]));
	}
	mix = min(mix, suff[0]);
	cout << mix << endl;

}

signed main() {
	crap;

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}