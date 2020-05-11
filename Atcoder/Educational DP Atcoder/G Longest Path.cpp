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

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

const int nax = 1e5 + 5;
vector<vector<int>> adj(nax);
vector<int> in_degree(nax);
vector<int> dist(nax, 0);
vector<int> visited(nax);
int n, e;

void dfs(int a){
	visited[a] = true;
	for(auto b: adj[a]){
		dist[b] = max(dist[b], dist[a] + 1);
		--in_degree[b];
		if(in_degree[b] == 0)
			dfs(b);
	}
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	cin >> n >> e;
	int t = e;
	while(t--){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		++in_degree[b];
	}


	for (int i = 1; i <= n; ++i){
		if(!visited[i] and in_degree[i] == 0)
			dfs(i);
	}

	int ans = 0;
	for(int i = 1; i <= n; i++){
		ans = max(ans, dist[i]);
	}
	cout << ans << endl;
	return 0;
}