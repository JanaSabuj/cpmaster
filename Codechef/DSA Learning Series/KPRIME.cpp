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

const int N = 1e5 + 7;
bool composite[N];
vi kprime(N);
const int K = 5;
// vvi kpVector(K + 1);
int prefix[N][K + 1];

void preprocess() {
	for (int i = 2; i <= N; i++) {
		if (composite[i]) continue;
		kprime[i] = 1;
		for (int j = 2 * i; j <= N; j += i) {
			composite[j] = 1;
			kprime[j]++;// no of distincr prime factors
		}
	}

	// for (int i = 2; i < N; i++) {
	// 	if (kprime[i] >= 1 and kprime[i] <= 5) {
	// 		kpVector[kprime[i]].push_back(i);
	// 	}
	// }

	// 2D prefix sums
	for (int i = 2; i <= N; i++) {
		for (int k = 1; k <= K; k++) {
			prefix[i][k] = prefix[i - 1][k] + (kprime[i] == k);
		}
	}
}


void solve() {
	int a, b, k;
	cin >> a >> b >> k;
	// vi vec = kpVector[k];
	// auto left = lower_bound(vec.begin(), vec.end(), a) - vec.begin();
	// auto right = lower_bound(vec.begin(), vec.end(), b) - vec.begin();

	// if (kprime[b] != k)
	// 	right--;

	// cout << right - left + 1 << endl;

	cout << prefix[b][k] - prefix[a - 1][k] << "\n";
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	preprocess();

	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}