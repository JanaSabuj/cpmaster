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

// recursive dp go approach
// bcoz no idea of gcd inverse
int n;
int arr[61];
int cache[61][10004];
int go(int idx, int g) {
	// base
	if (idx == n) {
		return (g == 1);
	}

	if (cache[idx][g] != -1)
		return cache[idx][g];

	// main
	int sum = go(idx + 1, g) + go(idx + 1, __gcd(g, arr[idx]));
	return cache[idx][g] = sum;
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	// cout << __gcd(55, 0) << endl;
	memset(cache, -1, sizeof(cache));
	int ans = go(0, 0);
	cout << ans << endl;
}

signed main() {
	crap;
	int t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}