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
int arr[1003][1003];
int dp[1003][1003];// latest time when it starts releasing dirty water
int ans[1003][1003];// latest time when it starts releasing dirty water

void solve() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
		}
	}

	for (int j = 0; j < m; ++j) {
		dp[0][j] = arr[0][j];
		ans[0][j] = 1;
	}

	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			// i-1,j-1,j,j+1
			dp[i][j] = dp[i - 1][j];
			if (j - 1 >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
			if (j + 1 < m) dp[i][j] = max(dp[i][j], dp[i - 1][j + 1]);

			if (arr[i][j] >= dp[i][j])
				ans[i][j] = 1;
			else
				ans[i][j] = 0;

			dp[i][j] = max(dp[i][j], arr[i][j]);
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << ans[i][j] << "";
		}
		cout << endl;
	}

}

#define SABUJ_JANA_WF 1
signed main() {
	crap;
#ifdef SABUJ_JANA_WF
	auto start = chrono::high_resolution_clock::now();
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("error.txt", "w", stderr);
#endif

	int t = 1;
	cin >> t;
	while (t--) solve();

#ifdef SABUJ_JANA_WF
	auto stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
	cerr << "Time taken: " << duration.count() / 1000000.0 << "seconds" << "\n";
#endif
	return 0;
}