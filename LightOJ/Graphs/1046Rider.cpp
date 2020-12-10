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
const int N = 13;
vvi grid;
int result[N][N];// final result of min time for each position
int dist[N][N][N];// temp dist for each rider
int cnt[N][N];
int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};

struct point {
	int x, y, k;
};


void solve(int tc) {
	// new testcase - reinitialise all global variables
	int n, m;
	cin >> n >> m;

	grid.assign(n + 1, {});
	memset(result, 0, sizeof(result));
	memset(cnt, 0, sizeof(cnt));

	vector<point> riders;
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		for (int j = 0; j < m; j++) {
			if (str[j] == '.')
				grid[i].push_back(-1);
			else {
				grid[i].push_back(str[j] - '0');
				riders.push_back({i, j, str[j] - '0'});
			}
		}
	}

	// bfs for each rider
	for (auto trip : riders) {
		memset(dist, -1, sizeof(dist));
		queue<point> q;
		q.push(trip);
		int xg = trip.x;
		int yg = trip.y;
		int kg = trip.k;
		dist[xg][yg][kg] = 1;// imp

		while (!q.empty()) {
			auto temp = q.front();
			q.pop();
			int x = temp.x;
			int y = temp.y;
			int k = temp.k;

			int l = k - 1;

			for (int i = 0; i < 8; i++) {
				int xx = x + dx[i];
				int yy = y + dy[i];

				if (!(xx >= 0 and xx < n and yy >= 0 and yy < m))
					continue;

				int d = dist[x][y][k] + (k == 0 ? 1 : 0);
				if (k == 0) {
					l = kg - 1;
				}

				if (dist[xx][yy][l] == -1 || dist[xx][yy][l] > d) {
					dist[xx][yy][l] = d;
					q.push({xx, yy, l});
				}

			}
		}

		// bfs over
		cnt[xg][yg]++;
		result[xg][yg] += 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; ++j) {
				if (i == xg and j == yg)
					continue;

				int nix = INT_MAX;
				for (int k = 0; k <= 10; k++) {
					if (dist[i][j][k] != -1)
						nix = min(nix, dist[i][j][k]);
				}

				if (nix != INT_MAX) {
					// cout << nix << endl;
					cnt[i][j]++;// successfylly visited by this rider
					result[i][j] += nix;// time added by this rider
				}
			}
		}
	}

	int tot = riders.size();
	int ans = INT_MAX;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (cnt[i][j] == tot) {
				// cout << "(" << i << "," << j <<  ")" << " ";
				// cout << result[i][j] << " ";
				ans = min(ans, result[i][j]);
			}
		}
	}

	cout << "Case " << tc << ": " << (ans == INT_MAX ? -1 : ans) << endl;

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