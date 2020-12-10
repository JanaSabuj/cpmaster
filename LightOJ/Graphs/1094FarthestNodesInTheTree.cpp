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
const int N = 30007;
vvi adj(N);// adj-matrix
vvi wt(N);// wt-matrix
vi dist(N);

pair<int, int> bfs(int x) {
	queue<int> q;
	q.push(x);
	dist[x] = 0;

	int a = 15, b;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int i = 0; i < (int)(adj[u].size()); i++) {
			int v = adj[u][i];
			int weight = wt[u][i];
			// cout << v << " " << weight << endl;
			if (dist[v] == -1) {
				q.push(v);
				dist[v] = dist[u] + weight;
				if (dist[v] > a) {
					a = dist[v];
					b = v;
				}
			}
		}
	}
	// cout << a << " " << b << endl;
	return {a, b};// max-dist, node
}

void solve(int tc) {
	int n;
	cin >> n;

	adj.assign(n + 1, {});
	wt.assign(n + 1, {});
	dist.assign(n + 1, -1);

	int m = n - 1;
	while (m--) {
		int a, b, w;
		cin >> a >> b >> w;
		adj[a].push_back(b);
		adj[b].push_back(a);

		wt[a].push_back(w);
		wt[b].push_back(w);
	}

	auto far = bfs(0);
	// cout << far.first << " " << far.second << endl;
	dist.assign(n + 1, -1);
	auto far2 = bfs(far.second);
	// cout << far.first << " " << far2.second << endl;
	cout << "Case " << tc << ": " << far2.first << endl;
	// cout << "Case " << tc << ": " << "far2.first" << endl;

}

signed main() {
	crap;

	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		solve(tc + 1);
	}

	return 0;
}
// shortest path from a root to all other nodes in a weighted tree can
// be solved by bfs
// Q -> find the diameter of a tree(weighted) -> use 2bfs method
// find max dist node A from any random node S using bfs
// find max dist node B from A by second bfs
// AB is the diameter
// always use vec.assign()