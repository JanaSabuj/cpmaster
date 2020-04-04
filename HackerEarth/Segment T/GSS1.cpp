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

struct node {
	int sum, pref, suff, ans;
};

vector<int> arr(550000, 0);
vector<node> tree(200500);


node create(int x) {
	node nd;
	nd.sum = x;
	nd.pref = nd.suff = nd.ans = x;
	return nd;
}

node combine(node l, node r) {
	node temp;
	temp.sum = l.sum + r.sum;
	temp.pref = max(l.pref, l.sum + r.pref);
	temp.suff = max(r.suff, r.sum + l.suff);
	temp.ans = max({l.ans, r.ans, l.suff + r.pref});
	return temp;
}

void build(int s, int e, int tn) {
	if (s == e) {
		tree[tn] = create(arr[s]);
		return;
	}

	int mid = (s + e) / 2;
	build(s, mid, 2 * tn);
	build(mid + 1, e, 2 * tn + 1);

	tree[tn] = combine(tree[2 * tn], tree[2 * tn + 1]);

}

node query(int s, int e, int tn, int l, int r){
	//outside
	if (s > r or e < l) {
		node t = create(INT_MIN);
		t.sum = 0;
		return t;

	}

	// inside
	if (s >= l and e <= r)
		return tree[tn];

	// partial
	int mid = (s + e) / 2;
	node val1 = query(s, mid, 2 * tn, l, r);
	node val2 = query(mid + 1, e, 2 * tn + 1, l, r);
	return combine(val1, val2);

}

signed main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("error.txt", "w", stderr);
// #endif
	crap;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	build(0, n - 1, 1);

	int q;
	cin >> q;

	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << query(0, n - 1, 1, l - 1, r - 1).ans << endl;
	}


	return 0;
}




