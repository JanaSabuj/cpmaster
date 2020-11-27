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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int n;
	cin >> n;

	int xyxor, yzxor, xzxor;
	cout << "XOR 1 2" << endl; cout.flush(); cin >> xyxor;
	cout << "XOR 2 3" << endl; cout.flush(); cin >> yzxor;
	// cout << "XOR 3 1" << endl; cin >> xzxor;
	xzxor = xyxor ^ yzxor;

	int xyand, yzand, xzand;
	cout << "AND 1 2" << endl; cout.flush(); cin >> xyand;
	cout << "AND 2 3" << endl; cout.flush(); cin >> yzand;
	cout << "AND 3 1" << endl; cout.flush(); cin >> xzand;

	int a, b, c;
	a = xyxor + 2 * xyand;
	b = yzxor + 2 * yzand;
	c = xzxor + 2 * xzand;

	int x, y, z;
	x = (a - b + c) / 2;
	y = (a + b - c) / 2;
	z = (-a + b + c) / 2;

	vi ans;
	ans.push_back(x);
	ans.push_back(y);
	ans.push_back(z);

	for (int i = 3; i < n; i++) {
		cout << "XOR " << i << " " << (i + 1) << endl;
		cout.flush();
		int v;
		cin >> v;
		ans.push_back(v ^ ans[i - 1]);
	}

	cout << "! ";
	for (auto x : ans)
		cout << x << " ";
	cout << endl;

	return 0;
}