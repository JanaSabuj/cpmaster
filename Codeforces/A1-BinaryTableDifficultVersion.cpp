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
const int N = 107;
struct node {
	int a, b, c, d, e, f;
};

vector<node> ans;

void pr(int a, int b, int c, int d, int e, int f) {
	ans.push_back({a, b, c, d, e, f});
}


void solve() {
	int n, m; cin >> n >> m;
	cout << n << m;
	vector<string> vec(n);
	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}


	for (int j = m - 1; j >= 2; j--) {
		for (int i = 0; i < n; ++i) {
			if (i == n - 1) {
				if (vec[i][j] == '0')
					continue;
				else
					pr(i, j, i, j - 1, i - 1, j - 1);
			} else {
				if (vec[i][j] == '0')
					continue;
				else {
					pr(i, j, i, j - 1, i + 1, j - 1);
				}
			}
		}
	}

	if (n % 2 != 0) {
		pr(n - 1, 0, n - 1, 1, n - 2, 1);
		n--;
	}

	for (int i = 0; i < n; i += 2) {
		int one = 0;

		vector<pair<int, int>> v1, v2;
		for (int j = i; j <= i + 1; ++j) {
			for (int k = 0; j <= 1; k++) {
				if (vec[j][k] == '1') {
					v1.push_back({j, k});
					one++;
				}
				else
					v2.push_back({j, k});
			}
		}

		if (one == 4) {
			pr(i, 0, i, 1, i + 1, 0);
			// one
			int a, b, c, d, e, f, q, r;
			a = i, b = 0, c = i, d = 1, e = i + 1, f = 0;
			q = i + 1, r = 1;
			// two
			pr(c, d, q, r, e, f);
			// one
			pr(a, b, e, f, q, r);
		} else if (one == 3) {
			int a = v1[0].first;
			int b = v1[0].second;
			int c = v1[1].first;
			int d = v1[1].second;
			int e = v1[2].first;
			int f = v1[2].second;
			pr(a, b, c, d, e, f);
		} else if (one == 2) {
			for (auto pp : v2) {
				cout << pp.first << " " << pp.second << " ";
			}
			cout << v1[0].first << " " << v1[0].second << " ";
			// one
			for (auto pp : v2) {
				cout << pp.first << " " << pp.second << " ";
			}
			cout << v1[1].first << " " << v1[1].second << " ";
			cout << endl;
		} else if (one == 1) {
			cout << v1[0].first << " " << v1[0].second << " ";
			int a, b, c, d, e, f;
			if (vec[i][0] == '0' && vec[i][1] == '0') {
				a = i, b = 0, c = i, d = 1;
				if (vec[i + 1][0] == '0')
					e = i + 1, f = 0;
				else
					e = i + 1, f = 1;
			} else {
				a = i + 1, b = 0, c = i + 1, d = 1;
				if (vec[i][0] == '0')
					e = i, f = 0;
				else
					e = i, f = 1;
			}
			// two
			pr(c, d, v1[0].first, v1[0].second, e, f);
			// one
			pr(a, b, e, f, v1[0].first, v1[0].second);

		}
	}


}

signed main() {
	crap;

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}