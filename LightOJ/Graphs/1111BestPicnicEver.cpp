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
vvi adj;
vi cnt;
vi visited;

void dfs(int x) {
	visited[x] = 1;
	cnt[x]++;
	for (auto u : adj[x]) {
		if (!visited[u]) {
			dfs(u);
		}
	}
}

void solve(int tc) {
	int k, n, m;
	cin >> k >> n >> m;
	vi cities(k);
	cnt.assign(n + 1, 0);// how many friends visited it
	for (int i = 0; i < k; ++i) {
		cin >> cities[i];
	}

	adj.assign(n + 1, {});
	while (m--) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
	}

	for (int i = 0; i < k; ++i) {
		int src = cities[i];
		visited.assign(n + 1, 0);
		dfs(src);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (cnt[i + 1] == k)
			ans++;
	}

	cout << "Case " << tc << ": " << ans << endl;
}

signed main() {
	crap;

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		solve(i + 1);
	}

	return 0;
}