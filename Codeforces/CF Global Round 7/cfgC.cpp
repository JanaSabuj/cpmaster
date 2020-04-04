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

const int MOD = 998244353;

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	crap;

	int n, k;
	cin>>n>>k;

	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int req = 0;
	for(int i = (n-k + 1); i <= n; i++)
		req += i;

	// cout << req << endl;

	vector<int> ids;

	for(int i=0; i<n; i++){
		if(arr[i] <= n and arr[i] >= (n-k+1))
			ids.push_back(i);	
	}

	int x = ids.size();

	int ans = 1;
	for(int i = 0; i < x - 1; i++){
		ans = ((ids[i+1] - ids[i])  * ans ) % MOD;
	}

	cout << req << " " << ans % MOD << endl;



	return 0;
}




