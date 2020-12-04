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
const int N = 205;
int n;
vi arr(N);
int t[N][2 * N];
int solve(int idx, int T) {
	if (idx >= n) {
		if (T <= 2 * n)
			return 0;
		else
			return INT_MAX;
	}
	if (T > 2 * n)
		return INT_MAX;
	if (t[idx][T] != -1)
		return t[idx][T];
	//
	return t[idx][T] = min({(int)INT_MAX, abs(arr[idx] - T) + solve(idx + 1, T + 1), solve(idx, T + 1)});
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + n);
	memset(t, -1, sizeof(t));
	cout << solve(0, 1) << endl;
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