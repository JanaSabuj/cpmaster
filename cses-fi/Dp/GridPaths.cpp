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
const int N = 1e4 + 7;
char arr[N][N];
int dp[N][N];
int n;
const int mod = 1e9 + 7;

signed main() {
	crap;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
	}

	if (arr[0][0] == '*') {
		cout << 0 << endl;
		return 0;
	}

	dp[0][0] = 1;
	for (int j = 1; j < n; ++j) {
		if (arr[0][j] == '*')
			dp[0][j] = 0;
		else
			dp[0][j] = dp[0][j - 1];
	}

	for (int i = 1; i < n; ++i) {
		if (arr[i][0] == '*')
			dp[i][0] = 0;
		else
			dp[i][0] = dp[i - 1][0];
	}

	for (int i = 1; i < n; ++i) {
		for (int j = 1; j < n; ++j) {
			if (arr[i][j] == '*')
				dp[i][j] = 0;
			else
				dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
		}
	}

	cout << dp[n - 1][n - 1] << endl;

	return 0;
}