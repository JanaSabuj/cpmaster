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

int cost[100007][6];
int dp[6][100007];
int n;
int calc(int op, int day){

	if(day > n)
		return 0;

	if(op == 0)
		return max({calc(1, day + 1), calc(2, day + 1), calc(3, day + 1)});

	if(dp[op][day] != -1)
		return dp[op][day];

	bool options[4];
	memset(options, false, sizeof(options));
	options[op] = true;

	int ans = INT_MIN;
	for(int i = 1; i < 4; i++){
		if(options[i] == false)
			ans = max(ans, calc(i, day + 1));
	}

	return dp[op][day] = cost[day - 1][op-1] + ans;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	cin >> n; // n days

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < 3; ++j){
			cin >> cost[i][j];
		}
	}

	memset(dp, -1, sizeof(dp));
	cout << calc(0, 0) << endl;


	return 0;
}