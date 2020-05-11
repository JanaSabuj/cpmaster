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

int power(int a, int b, int MOD) {
	a = a % MOD;
	int res = 1;
	while (b) {
		if (b & 1)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b /= 2;
	}

	return res;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif

	int n, p;
	cin >> n >> p;

	string str;
	cin >> str;

	int ans = 0;
	if (p == 2 or p == 5) {
		for (int i = 0; i < n; i++) {
			if ((str[i] - '0') % p == 0) {
				ans += (i + 1);
			}
		}

		cout << ans << endl;
		return 0;
	}

	map<int,int> mp;
	mp[0] = 1;

	int cur = 0;
	int req = 0;
	for(int i = 0; i < n; i++){
		cur = cur* 10 + (str[i] - '0');
		cur = cur % p;

		int val = (power(10, n-1-i, p));
		val = val * cur;
		val = val % p;

		req += mp[val];

		mp[val]++;
	}


	cout << req << endl;



	return 0;
}

--------------------------------------------------------------------

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

int power(int a, int b, int MOD) {
	a = a % MOD;
	int res = 1;
	while (b) {
		if (b & 1)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b /= 2;
	}

	return res;
}

signed main() {
 

	int n, p;
	cin >> n >> p;

	string str;
	cin >> str;

	int ans = 0;
	if (p == 2 or p == 5) {
		for (int i = 0; i < n; i++) {
			if ((str[i] - '0') % p == 0) {
				ans += (i + 1);
			}
		}

		cout << ans << endl;
		return 0;
	}

	map<int,int> mp;
	mp[0] = 1;

	int cur = 0;
	for(int i = 0; i < n; i++){
		cur = cur* 10 + (str[i] - '0');
		cur = cur % p;

		int val = (power(10, n-1-i, p));
		val = val * cur;
		val = val % p;

		mp[val]++;
	}

	for(int i = 0; i < p; i++){
		ans += (mp[i] * (mp[i] - 1))/ 2;
	}

	cout << ans << endl;



	return 0;
}









