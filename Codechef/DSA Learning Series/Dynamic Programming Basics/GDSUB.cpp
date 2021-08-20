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
// here subsequences treated as subsets
// only distinct elements are to be considered
void solve() {
	int n, k;
	cin >> n >> k;

	vi arr(n);
	vi d;
	map<int, int> mp;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (mp.find(arr[i]) == mp.end())
			d.push_back(arr[i]);
		mp[arr[i]]++;
	}

	int dx = d.size();
	int dy = min(1010LL, k);
	// dp[i][j] = no of subseqs. of first i elements having size j
	int dp[dx + 1][dy + 1];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i <= dx; ++i) {
		dp[i][0] = 1;
	}

	for (int i = 1; i <= dx; ++i) {
		for (int j = 1; j <= dy; ++j) {
			dp[i][j] = (dp[i - 1][j] % mod + (dp[i - 1][j - 1] * mp[d[i - 1]]) % mod) % mod;
		}
	}

	// dp[dx][<=dy]
	int sum = 0;
	for (int j = 0; j <= dy; ++j) {
		int xx = dp[dx][j] % mod;
		sum = (sum + xx) % mod;
	}

	cout << sum << endl;
}

signed main() {
	crap;

	int t = 1;
	// cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}