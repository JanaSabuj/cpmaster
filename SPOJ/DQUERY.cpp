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

const int block = 200;
const int lim = 1e6 + 7;

int mp[lim];

struct Query {
	int l, r, idx;
};

class DS {
public:
	int l, r;
	// int mp[lim];
	// unordered_map<int, int> mp;// normal  map TLE
	int ans;

	void add(int x) {
		mp[x]++;
		if (mp[x] == 1)
			ans++;
	}

	void remove(int x) {
		mp[x]--;
		if (mp[x] == 0)
			ans--;
	}

	int req() {
		return ans;
	}
};

// MO sort
bool comp(const Query& x, const Query& y) {
	if (x.l / block != y.l / block)
		return x.l / block < y.l / block;
	return x.r < y.r;
}

//
vi MO(vi& arr, vector<Query>& queries) {
	int n = queries.size();

	vi answers(n);
	sort(queries.begin(), queries.end(), comp);
	// cout << "hi" << endl;
	DS ds;
	ds.l = 0;
	ds.r = -1;
	ds.ans = 0;

	for (auto q : queries) {
		while (ds.r < q.r) {
			ds.r++;
			ds.add(arr[ds.r]);
		}

		while (ds.l > q.l) {
			ds.l--;
			ds.add(arr[ds.l]);
		}

		while (ds.r > q.r) {
			ds.remove(arr[ds.r]);
			ds.r--;
		}

		while (ds.l < q.l) {
			ds.remove(arr[ds.l]);
			ds.l++;
		}

		answers[q.idx] = ds.req();

	}

	return answers;
}

void solve() {
	int n;
	cin >> n;

	// get arr
	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	// get q
	int q;
	cin >> q;
	vector<Query> queries(q);
	for (int i = 0; i < q; ++i) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;

		queries[i] = {l, r, i};
	}

	vector<int> reqDistinct = MO(arr, queries);
	for (auto x : reqDistinct)
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
