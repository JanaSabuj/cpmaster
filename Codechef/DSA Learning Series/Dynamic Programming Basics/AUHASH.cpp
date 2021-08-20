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

// dp[x][y][z] = no of strings with chars 1-x, having len y
// and total sum = z
int dp[53][53][1401];
void solve(int tc) {

	for (int i = 0; i < 53; ++i) {
		dp[i][0][0] = 1;
	}

	for (int i = 1; i <= 52; ++i) {
		for (int j = 1; j <= 52; ++j) {
			for (int k = 1; k <= 1401; k++) {
				dp[i][j][k] = 0;
				// excl this char
				if (i - 1 >= 0) dp[i][j][k] += dp[i - 1][j][k];
				// incl this char
				if (j - 1 >= 0 and k - 1 >= 0) dp[i][j][k] += dp[i - 1][j - 1][k - i];
			}
		}
	}


	// print
	int l, s;
	cin >> l >> s;
	int ans = 0;
	if (l > 52 || s > 1378) {
		ans = 0;
	} else {
		// ans = dp[a][b][c];
		ans = dp[52][l][s];
	}

	cout << "Case " << tc << ": " << ans << endl;

}

signed main() {
	crap;
	int t = 1;
	cin >> t;
	int tc = 0;
	while (t--) solve(++tc);
	return 0;
}