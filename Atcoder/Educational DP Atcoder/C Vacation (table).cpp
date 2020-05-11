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


signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;	

	int n;
	cin >> n;

	vector<int> dp(3);
	for (int i = 0; i < 3; ++i){
		cin >> dp[i];
	}

	for(int day = 1; day < n; day++){
		vector<int> new_dp(3, INT_MIN);
		vector<int> cost(3);
		for (int i = 0; i < 3; ++i){
			cin >> cost[i];
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(i != j){
					new_dp[i] = max(new_dp[i], dp[j] + cost[i]);
				}
			}
		}

		dp = new_dp;
	}


	cout << max({dp[0], dp[1], dp[2]}) << endl;


	return 0;
}