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
vi arr(105);
int t[N];
int n, x;
const int mod = 1e9 + 7;

int dp(int x) {
	if (x < 0)
		return 0;
	if (x == 0)
		return 1;
	if (t[x] != -1)
		return t[x];
	//
	int ways = 0;
	for (int i = 0; i < n; ++i) {
		ways = (ways + dp(x - arr[i])) % mod;
	}

	return t[x] = ways;
}

signed main() {
	crap;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	memset(t, -1, sizeof(t));
	cout << dp(x) << endl;

	return 0;
}