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
const int N = 1e6 + 7;
const int mod = 1e9 + 7;

// dp[N] = no of ways to make N using 2 and 3, ORDER MATTERS
// bcoz 2 & 3's order matters, we must consider each item on every iteration
int dp[N];
void precalc() {
	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i < N; ++i) {
		dp[i] = (dp[i - 2] + dp[i - 3]) % mod;
	}
}

void solve() {
	int n;
	cin >> n;
	cout << dp[n] << endl;
}

signed main() {
	crap;

	int t = 1;
	cin >> t;
	precalc();

	while (t--) {
		solve();
	}

	return 0;
}