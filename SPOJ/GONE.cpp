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

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79};

int dp[12][2][100];

bool isPrime(int num) {
	for (auto x : primes)
		if (x == num)
			return true;
	return false;
}

int solve(const string& str, int idx = 0, int tight = 1, int sum = 0) {
	if (idx == str.length()) {
		if (isPrime(sum))
			return 1;
		else
			return 0;
	}

	if (dp[idx][tight][sum] != -1)
		return dp[idx][tight][sum];

	int cnt = 0;
	if (tight) {
		for (int i = 0; i <= str[idx] - '0'; i++)
			if (i == str[idx] - '0')
				cnt += solve(str, idx + 1, 1, sum + i);
			else
				cnt += solve(str, idx + 1, 0, sum + i);
	} else {
		for (int i = 0; i <= 9; i++) {
			cnt += solve(str, idx + 1, 0, sum + i);
		}
	}

	return dp[idx][tight][sum] = cnt;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin >> t;

	while (t--) {
		int l, r;
		cin >> l >> r;

		string R = to_string(r);
		string L = to_string(l - 1);

		memset(dp, -1, sizeof(dp));
		int a1 = solve(R);
		memset(dp, -1, sizeof(dp));
		int b1 = solve(L);
		cout << a1 - b1 << endl;

	}


	return 0;
}
