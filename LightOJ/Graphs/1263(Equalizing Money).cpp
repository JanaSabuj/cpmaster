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

#define N 1007
vvi adj(N);
vi visited(N);
vi money(N);

void dfs(int x, int & total, int & cnt) {
	visited[x] = true;
	cnt++;
	total += money[x];

	for (auto u : adj[x])
		if (!visited[u])
			dfs(u, total, cnt);
}

void solve(int tc) {
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> money[i];
		adj[i].clear();
		visited[i] = false;
	}

	while (m--) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	bool flag = true;
	int comps = 0;
	int prev ;
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			comps++;

			int total = 0;
			int cnt = 0;
			dfs(i, total, cnt);

			if (total % cnt != 0) {
				flag = false;
				break;
			}

			if (comps == 1)
				prev = total / cnt;
			else {
				if (prev != total / cnt) {
					flag = false;
					break;
				}
			}
		}
	}

	if (flag)
		cout << "Case " << tc << ": " << "Yes" << endl;
	else
		cout << "Case " << tc << ": " << "No" << endl;

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
