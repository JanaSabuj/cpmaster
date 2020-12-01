/*
Sabuj Jana / @greenindia
https://www.janasabuj.github.io
*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define int long long int
#define double long double
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define endl "\n"
void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}
void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}
// const int N = 0;
const int mod = 1e9 + 7;
vi arr(102);
// int t[101][1000001];

int dp(int idx, int x,  vvi& t) {
	if (x < 0)
		return 0;
	if (idx < 0 and x == 0)
		return 1;
	if (idx < 0)
		return 0;
	//

	if (t[idx][x] != -1)
		return t[idx][x];

	int ways = (dp(idx, x - arr[idx],  t) + dp(idx - 1, x,  t)) % mod;
	return t[idx][x] = ways;
}

signed main() {
	crap;

	int n, x;
	cin >> n >> x;
	vvi t(n + 1, vi(x + 1, -1));

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	cout << dp(n - 1, x, t) << endl;


	return 0;
}