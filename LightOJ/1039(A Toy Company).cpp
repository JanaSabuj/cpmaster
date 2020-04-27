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

struct node {
	int a, b, c;
	int dist;
};

bool visited[26][26][26];
bool restricted[26][26][26];

int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0 , 0, 1, -1, 0, 0};
int dz[6] = {0 , 0, 0, 0, 1, -1};

void solve(int tc) {
	cout << "Case " << tc << ": ";
	memset(visited, 0, sizeof(visited));
	memset(restricted, 0, sizeof(restricted));

	string start;
	string end;

	cin >> start >> end;

	int qx;
	cin >> qx;

	while (qx--) {
		string a, b, c;
		cin >> a >> b >> c;

		for (auto x : a)
			for (auto y : b)
				for (auto z : c) {
					restricted[x - 'a'][y - 'a'][z - 'a'] = true;
				}
	}

	int sa = start[0] - 'a', ea = end[0] - 'a';
	int sb = start[1] - 'a', eb = end[1] - 'a';
	int sc = start[2] - 'a', ec = end[2] - 'a';

	if (restricted[sa][sb][sc] or restricted[ea][eb][ec]) {
		cout << -1 << endl;
		return;
	}
	queue<node> q;
	q.push({sa, sb, sc, 0});
	visited[sa][sb][sc] = true;


	while (!q.empty()) {
		node x = q.front();
		q.pop();

		if (x.a == (end[0] - 'a') and x.b == (end[1] - 'a') and x.c == (end[2] - 'a')) {
			cout << x.dist << endl;
			return;
		}


		int DIST = x.dist;

		for (int i = 0; i < 6; i++) {
			int A = (x.a + dx[i] + 26) % 26;
			int B = (x.b + dy[i] + 26) % 26;
			int C = (x.c + dz[i] + 26) % 26;

			if (!restricted[A][B][C] and !visited[A][B][C]) {
				q.push({A, B, C, DIST + 1});
				visited[A][B][C] = true;
			}
		}

	}

	cout << -1 << endl;
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
// 4d node dfs + (3d visited array + 3d restricted array) of letters
