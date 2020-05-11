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
#endif
	crap;

	string str;
	cin >> str;

	deque<char> dq;

	for(auto x: str)
		dq.push_back(x);

	int q;
	cin >> q;

	int cnt = 0;

	while (q--) {
		int t;
		cin >> t;

		if (t == 2) {
			int f;
			char c;
			cin >> f >> c;
			// cout << f << c << endl;

			if (cnt % 2 == 0) {
				if (f == 1)
					dq.push_front(c);
				else
					dq.push_back(c);
			} else {
				if (f == 2)
					dq.push_front(c);
				else
					dq.push_back(c);
			}

		} else {
			cnt++;
		}
	}

	string ans = "";
	for(auto x: dq)
		ans += x;
	if (cnt & 1){
		reverse(ans.begin(), ans.end());
	}

	cout << ans << endl;
	
	return 0;
}




