/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
//
//		  _____       _           _        _
//		 / ____|     | |         (_)      | |
//		| (___   __ _| |__  _   _ _       | | __ _ _ __   __ _
//		 \___ \ / _` | '_ \| | | | |  _   | |/ _` | '_ \ / _` |
//		 ____) | (_| | |_) | |_| | | | |__| | (_| | | | | (_| |
//		|_____/ \__,_|_.__/ \__,_| |  \____/ \__,_|_| |_|\__,_|
//		                        _/ |
//		                       |__/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define int long long int
#define double long double
#define PI acos(-1)
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

#define N 20007


void solve(int tc) {
	vvi adj(N);

	int qx;
	cin >> qx;

	while (qx--) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	// 2 color the graph
	vi color(N, -1);

	int mx = 0;
	for (int i = 1; i < N; i++) {
		int zero = 0, one = 0;
		if (!adj[i].empty() and color[i] == -1) {
			// not visited
			color[i] = 0;
			zero++;

			queue<int> q;
			q.push(i);

			while (!q.empty()) {
				int x = q.front();
				q.pop();

				for (auto u : adj[x]) {
					if (!adj[u].empty() and  color[u] == -1 ) {
						color[u] = color[x] ^ 1;
						if (color[u] == 0)
							zero++;
						else
							one++;
						q.push(u);
					}
				}
			}
		}

		mx += max(zero, one);
	}
	//

	cout << "Case " << tc << ": " << mx << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin >> t;

	int tc = 0;
	while (t--) {
		solve(++tc);
	}


	return 0;
}
// 2 color a bipartite graph + graph component max color concept
