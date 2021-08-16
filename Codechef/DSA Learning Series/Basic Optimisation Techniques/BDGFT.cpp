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
	string str;
	cin >> str;

	int n = str.size();
	vi zeros(n, 0), ones(n, 0);
	for (int i = 0; i < n; ++i) {
		if (i == 0) {
			if (str[i] == '0') zeros[i]++;
			else ones[i]++;
		} else {
			zeros[i] = zeros[i - 1] + (str[i] == '0');
			ones[i] = ones[i - 1] + (str[i] == '1');
		}
	}

	int cnt = 0;
	for (int x = 1; x <= sqrt(n); x++) {
		int len = x * (x + 1);

		for (int i = 0; i < n - len + 1; i++) {
			int l = i;
			int r = l + len - 1;

			int z = zeros[r] - (l - 1 < 0 ? 0 : zeros[l - 1]);
			int o = ones[r] - (l - 1 < 0 ? 0 : ones[l - 1]);

			if (z == o * o)
				cnt++;
		}
	}

	cout << cnt << endl;
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