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
#define endl "\n"

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

signed main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("error.txt", "w", stderr);
// #endif
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		string a, b;
		cin >> a >> b;

		map<char, int> amap, bmap;
		for (auto x : a)
			amap[x]++;
		for (auto x : b)
			bmap[x]++;


		int carry = 0;
		bool flag = true;
		for (int i = 0; i < 26; i++) {
			char ch = i + 'a';
			// cout << ch << endl;
			int use_carry = bmap[ch] - amap[ch];
			if (carry >= use_carry and use_carry % k == 0) {
				carry -= use_carry;
				amap[ch] = 0;
				bmap[ch] = 0;
			} else {
				flag = false;
				break;
			}

		}

		if (!flag)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}



	return 0;
}