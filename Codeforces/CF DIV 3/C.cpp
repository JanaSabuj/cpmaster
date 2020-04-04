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

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		string str;
		cin >> str;

		string ans1 = "1";
		string ans2 = "1";

		for (int i = 1; i < n; i++) {
			char c = str[i];
			
			if (c == '2') {
				if (ans1 < ans2) {
					ans1 += "2";
					ans2 += "0";
				} else if (ans2 < ans1) {
					ans2 += "2";
					ans1 += "0";
				} else {
					ans1 += "1";
					ans2 += "1";
				}

			}
			else if (c == '1') {
				if (ans1 <= ans2) {
					ans1 += "1";
					ans2 += "0";
				} else if (ans2 < ans1) {
					ans2 += "1";
					ans1 += "0";
				}
			}
			else {

				ans1 += "0";
				ans2 += "0";
			}
		}


		cout << ans1 << endl;
		cout << ans2 << endl;
	}


return 0;
}




