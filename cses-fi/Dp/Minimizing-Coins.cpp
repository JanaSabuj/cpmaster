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
const int N = 105;
int n, x;
vi arr(N);
int t[1000005];

int dp(int x) {
	//
	if (x < 0)
		return INT_MAX;
	if (x == 0)
		return 0;
	if (t[x] != -1)
		return t[x];

	int coins = INT_MAX;
	for (int i = 0; i < n; ++i) {
		coins = min(coins, 1 + dp(x - arr[i]));
	}

	return t[x] = coins;
}

signed main() {
	crap;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	memset(t, -1, sizeof(t));
	int val = dp(x);
	cout << (val == INT_MAX ? -1 : val) << endl;

	return 0;
}