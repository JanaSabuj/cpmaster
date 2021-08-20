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
const int N = 0;

void solve() {
	int n, k, p;
	cin >> n >> k >> p;

	vi arr(n);
	vector<pair<int, int>> grp(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		grp[i] = {arr[i], i + 1};
	}

	sort(grp.begin(), grp.end());
	vi comp(n + 1, -1);
	int island = 0;

	for (int i = 0; i < n; ++i) {
		if (i == 0)
			comp[grp[i].second] = island;
		else {
			if (grp[i].first - grp[i - 1].first <= k)
				comp[grp[i].second] = island;
			else {
				comp[grp[i].second] = island + 1;
				island++;
			}
		}
	}

	while (p--) {
		int l, r;
		cin >> l >> r;

		if (comp[l] == comp[r])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

}

signed main() {
	crap;

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}