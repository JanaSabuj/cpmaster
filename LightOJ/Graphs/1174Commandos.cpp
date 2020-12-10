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
vvi adj(N);
void bfs(int x, vi& dis) {
	queue<int> q;
	q.push(x);
	dis[x] = 0;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (auto v : adj[u]) {
			if (dis[v] == -1) {
				q.push(v);
				dis[v] = dis[u] + 1;
			}
		}
	}
}
void solve(int tc) {
	adj.assign(N, {});
	int n, m;
	cin >> n >> m;

	while (m--) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int s, d;
	cin >> s >> d;
	vi dis1(n + 1, -1);
	vi dis2(n, -1);
	bfs(s, dis1);
	bfs(d, dis2);

	int mx = 0;
	for (int i = 0; i < n; ++i) {
		mx = max(mx, dis1[i] + dis2[i]);
	}
	cout << "Case " << tc << ": " << mx << endl;
}

signed main() {
	crap;

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		solve(i + 1);
	}

	return 0;
}
// do bfs from src, bfs from dest on all nodes
// ans is the max of the sums of 2 dists