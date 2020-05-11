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
#define crap                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define int long long int
#define double long double
#define PI acos(-1)
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

void print1d(const vector<int>& vec) {
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

void print2d(const vector<vector<int>>& vec) {
    for (auto row : vec) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vi height(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> height[i];
    }

    vvi adj(n + 1);

    while (m--) {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(height[y]);
        adj[y].push_back(height[x]);
    }

    // print2d(adj);

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (adj[i].size() == 0 or (*max_element(adj[i].begin(), adj[i].end()) < height[i]))
            cnt++;
    }

    cout << cnt << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
#endif
    crap;

    solve();

    return 0;
}