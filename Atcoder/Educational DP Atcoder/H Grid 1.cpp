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

const int nax = 1e3 + 7;
const int mod = 1e9 + 7;
vector<vector<char>> grid(nax, vector<char>(nax));
vector<vector<int>> dp(nax, vector<int>(nax, 0));


signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int h, w;
	cin >> h >> w;

	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			cin >> grid[i][j];
		}
	}

	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			if(i == 0 and j == 0)
				dp[i][j] = 1;
			else if(i == 0)
				dp[i][j] = ( grid[i][j] == '.') ? dp[i][j - 1] : 0;
			else if(j == 0)
				dp[i][j] = ( grid[i][j] == '.') ? dp[i - 1][j] : 0;
			else{
				if(grid[i][j] != '.')
					dp[i][j] = 0;
				else
					dp[i][j] = (dp[i-1][j] % mod + dp[i][j - 1] % mod) % mod;
			}
		}
	}

	cout << dp[h-1][w-1] << endl;

	return 0;
}