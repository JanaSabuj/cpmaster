/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/

#include <bits/stdc++.h>
using namespace std;

#define int long long int

void dfsUtil(const vector<vector<int>>& adj, int& temp, int i, int visited[]) {
	visited[i] = true;
	temp++;

	for (auto x : adj[i]) {
		if (!visited[x])
			dfsUtil(adj, temp, x, visited);
	}
}

void dfs(const vector<vector<int>>& adj, int n, int m, int clib, int croad) {
	int visited[n + 1];
	memset(visited, 0, sizeof(visited)); // not visited

	int k = 0; // no of components
	int cnt = 0; // no of nodes in components

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			k++;
			int temp = 0;
			dfsUtil(adj, temp, i, visited);
			cnt += (temp - 1);
		}
	}

	int ans = min(k * clib + cnt * croad, k * clib + cnt * clib);
	cout << ans << endl;
}

signed main() {
	freopen("input.txt", "r", stdin);

	int q;
	cin >> q;

	while (q--) {
		int n, m, clib, croad;
		cin >> n >> m >> clib >> croad;

		vector<vector<int>> adj(n + 1);
		int x = m;
		while (x--) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}

		dfs(adj, n, m, clib, croad);
	}


	return 0;
}


