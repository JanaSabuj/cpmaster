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

void mul(vvi& A, vvi& B) {
	vvi C(2, vi(2, 0));
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			for (int k = 0; k < 2; k++) {
				int v = (A[i][k] * B[k][j]) % mod;
				C[i][j] = (C[i][j] + v) % mod;
			}
		}
	}
	swap(C, A);
}

vvi power(vvi& A, int b) {
	vvi res = {{1, 0}, {0, 1}};
	while (b) {
		if (b & 1)
			mul(res, A);// res = res * A
		mul(A, A);// A = A * A -> assignment is done to the left element
		b /= 2;
	}

	return res;
}

void solve() {
	int n, m;
	cin >> n >> m;

	m %= mod;
	// n %= mod;

	if (n == 1)
		cout << m << endl;
	else if (n == 2)
		cout << ((m * m) % mod)  << endl;
	else {
		int me = (m - 1 + mod) % mod;
		vvi A = {{me, me}, {1, 0}};
		vvi AA = power(A, n - 1);

		int ans = ((AA[1][0] * m) % mod + AA[1][1] * 1) % mod;
		ans = (ans * m) % mod;
		cout << ans << endl;
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
	cerr << "Time taken :\n" << duration.count() / 1000000.0 << "s" << "\n";
#endif
	return 0;
}