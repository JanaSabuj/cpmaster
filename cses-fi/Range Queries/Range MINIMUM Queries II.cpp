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

void solve() {
	int n, q;
	cin >> n >> q;

	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	// preprocess
	int block = (int)sqrt(n + 0.00) + 1;
	vi b(block, 0);

	for (int i = 0; i < n; ++i) {
		b[i / block] += arr[i];
	}

	// q
	for (int i = 0; i < q; ++i) {
		int qx;
		cin >> qx;

		if (qx == 1) {
			int k, v;
			cin >> k >> v;
			k--;
			int old = arr[k];
			arr[k] = v;
			b[k / block] += (v - old);
		} else {
			int l, r;
			cin >> l >> r;
			l--;
			r--;
			int c_l = l / block;
			int c_r = r / block;

			int ans = 0;
			if (c_l == c_r) {
				for (int i = l; i <= r; i++)
					ans += arr[i];
			} else {
				for (int i = l; i < (c_l + 1) * block; i++)
					ans += arr[i];
				for (int i = c_l + 1; i < c_r; ++i) {
					ans += b[i];
				}
				for (int i = (c_r) * block; i <= r; i++ )
					ans += arr[i];
			}

			cout << ans << endl;
		}
	}

}

signed main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("error.txt", "w", stderr);
// #endif
	crap;

	solve();


	return 0;
}
