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

const int block = 450;
const int lim = 1e6 + 7;
int mp[lim];
int req;

struct Query {
	int l, r, idx;
};

void add(int x) {
	int prev = mp[x];
	mp[x]++;
	int curr = prev + 1;
	req = req + (curr) * (curr) * x - prev * prev * x;
}

void remove(int x) {
	int prev = mp[x];
	mp[x]--;
	int curr = prev - 1;
	req = req + (curr) * (curr) * x - prev * prev * x;
}

bool comp(const Query& x, const Query& y) {
	if (x.l / block != y.l / block)
		return x.l / block < y.l / block;
	return (x.l / block & 1) ? x.r < y.r: x.r > y.r;// avoids TLE
}

vi MO(const vi& arr, vector<Query>& queries) {
	int q = queries.size();
	vi answers(q);
	sort(queries.begin(), queries.end(), comp);

	int l = 0, r = -1;
	req = 0;
	for (auto q : queries) {
		while (r < q.r) {
			r++;
			add(arr[r]);
		}

		while (l < q.l) {
			remove(arr[l]);
			l++;
		}

		while (l > q.l) {
			l--;
			add(arr[l]);
		}

		while (r > q.r) {
			remove(arr[r]);
			r--;
		}

		answers[q.idx] = req;
	}

	return answers;

}

void solve() {
	int n, q;
	cin >> n >> q;

	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	vector<Query> queries(q);
	for (int i = 0; i < q; ++i) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		queries[i] = {l, r, i};
	}

	vi yandex = MO(arr, queries);
	for (auto x : yandex)
		cout << x << endl;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	solve();

	return 0;
}
