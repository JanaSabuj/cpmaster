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

int LCS(string a, string b) {
	int n = a.length();
	int lcs[n + 1][n + 1];
	memset(lcs, 0, sizeof(lcs));

	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= n; ++j) {
			if (i == 0 or j == 0)
				lcs[i][j] = 0;
			else if (a[i - 1] == b[j - 1])
				lcs[i][j] = 1 + lcs[i - 1][j - 1];
			else
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
		}
	}

	return lcs[n][n];	
}

int LPS(string str) {
	string orig = str;
	reverse(orig.begin(), orig.end());
	return LCS(str, orig);
}

void solve(int tc) {
	string str;
	cin >> str;

	cout << "Case " << tc << ": " <<  str.length() - LPS(str) << endl;
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
