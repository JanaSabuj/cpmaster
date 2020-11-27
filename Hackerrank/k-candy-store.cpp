//------------------------------God is Great---------------------------------
//------------------------Sabuj Jana | JU | greenindia-----------------------
//------------------------janasabuj.github.io-----------------------
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

const int N = 1005;
const int mod = 1e9;
int dp[N][N];

void pre() {
	dp[0][0] = 1;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == j)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
		}
	}
}

int nck(int n, int k) {
	return dp[n][min(k, n - k)];
}

signed main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
// #endif
	crap;

	pre();

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> k >> n;
		int val = nck(n + k - 1, k - 1);
		// cout << ((int)log10(val) + 1) << endl;
		// cout << ((int)1e9) << endl;
		cout << val << endl;
	}


	return 0;
}