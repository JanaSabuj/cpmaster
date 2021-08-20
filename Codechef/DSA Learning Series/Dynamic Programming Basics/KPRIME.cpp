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
const int N = 1e5 + 9;
bool composite[N];// false
set<int> dpfs[N];// no of distinct pfs of i = dpfs[i].size()
int pref[N][6];

// O(NloglogN)
void sieve() {
	composite[0] = composite[1] = 1;
	for (int i = 2; i < N; ++i) {
		if (composite[i]) continue;
		dpfs[i].insert(i);
		for (int j = 2 * i; j < N; j += i) {
			composite[j] = 1;
			dpfs[j].insert(i);
		}
	}
}

void pre() {
	for (int i = 2; i < N; ++i) {
		if (i == 2) {
			pref[i][1] = 1;
		} else {
			for (int j = 1; j <= 5; ++j) {
				pref[i][j] = pref[i - 1][j] + (dpfs[i].size() == j);
			}
		}
	}
}

void solve() {
	int a, b, k;
	cin >> a >> b >> k;

	int r = pref[b][k];
	int l = (a - 1 < 2 ? 0 : pref[a - 1][k]);

	cout << r - l << endl;
}

signed main() {
	crap;
	sieve();
	pre();
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}