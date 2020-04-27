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

#define N 27
char mat[N][N];
int visited[N * N];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y, int n, int m,  int & cnt) {
	visited[x * m + y] = true;
	cnt++;

	for (int i = 0; i < 4; i++) {
		int r = x + dx[i];
		int c = y + dy[i];

		if (r < 0 or r >= n or c < 0 or c >= m or mat[r][c] == '#' or visited[r * m + c] == true)
			continue;

		dfs(r, c, n, m, cnt);
	}
}

void solve(int tc) {
	memset(visited, false, sizeof(visited));
	int n, m;
	cin >> m >> n;

	int srx, sry;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> mat[i][j];
			if (mat[i][j] == '@') {
				srx = i;
				sry = j;
			}
		}
	}

	int cnt = 0;
	dfs(srx, sry, n, m, cnt);

	cout << "Case " << tc << ": " << cnt << endl;

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
