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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void solve(int tc) {
	int n, m;
	cin >> n >> m;

	char grid[n][m];
	vector<pair<int, int>> vec;
	pair<int, int> home;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> grid[i][j];
			if (grid[i][j] == 'a' or grid[i][j] == 'b' or grid[i][j] == 'c')
				vec.push_back({i, j});
			if (grid[i][j] == 'h')
				home = {i, j};
		}
	}

	int mx = 0;// ans
	for (auto p : vec) {
		// start bfs from each powerpuff girl to home h
		int x = p.first;
		int y = p.second;

		vi visited(n * m, 0);// visited array
		vi time(n * m , -1);

		queue<int> q;
		q.push(x * m + y);
		visited[x * m + y] = true;
		time[x * m + y] = 0;


		while (!q.empty()) {
			int curr = q.front();
			q.pop();

			int x = curr / m;
			int y = curr % m;

			if (x == home.first and y == home.second) {
				mx = max(mx, time[x * m + y]);
				break;
			}

			for (int i = 0; i < 4; i++) {
				int r = x + dx[i];
				int c = y + dy[i];

				if (r < 0 or r >= n or c < 0 or c >= m or grid[r][c] == 'm' or grid[r][c] == '#' or visited[r * m + c] == true )
					continue;// simon go back

				q.push(r * m + c);
				visited[r * m + c] = true;
				time[r * m + c] = time[x * m + y] + 1;
			}
		}
	}
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
