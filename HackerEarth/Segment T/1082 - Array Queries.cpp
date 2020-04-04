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

vector<int> arr(100007);
vector<int> tree(400028);

void build(int s, int e, int tn){
	if(s == e){
		tree[tn] = arr[s];
		return;
	}

	int mid = (s + e)/2;
	build(s, mid, 2*tn);
	build(mid+1, e, 2*tn+1);

	tree[tn] = min(tree[2*tn], tree[2*tn+1]);
}

int query(int s, int e, int tn, int l, int r){
	// outside
	if(e < l or s > r)
		return INT_MAX;
	// inside
	if(s >= l and e <= r)
		return tree[tn];

	int mid = (s + e)/2;
	int x = query(s, mid, 2*tn, l, r);
	int y = query(mid+1, e, 2*tn+1, l, r);

	return min(x,y);
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin >> t;

	for(int w = 1; w <= t; w++){
		int n, q;
		cin >> n >> q;

		// arr.clear();
		// tree.clear();
		
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		build(0, n-1, 1);
		cout << "Case " << w << ":"<<endl;
		for(int i=0; i<q; i++){
			int l, r;
			cin >> l >> r;
			cout <<query(0,n-1,1, l-1, r-1) << endl;
		}
	}



	return 0;
}




