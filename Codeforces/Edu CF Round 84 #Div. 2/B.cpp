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

		bool marry[n + 1];
		memset(marry, true, sizeof(marry));

		int free_girl = 0;
		for (int i = 1; i <= n; i++) {
			int suit;
			cin >> suit;
			bool virgin = true;

			for (int j = 0; j < suit; j++) {
				int prince;
				cin >> prince;


				if (virgin == false)
					continue;

				if (marry[prince] == false)
					continue;

				marry[prince] = false;
				virgin = false;
			}

			if (virgin)
			{
				free_girl = i;
			}
		}

		if(free_girl == 0)
			cout << "OPTIMAL" << endl;
		else{
			cout << "IMPROVE" << endl;
			cout << free_girl ;
			for(int i = 1; i <= n; i++)
				if(marry[i])
				{
					cout <<" " <<  i << endl;
					break;
				}
		}

	}


	return 0;
}




