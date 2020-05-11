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

void print1d(const vector<int>& vec) {for (auto val : vec) {cerr << val << " ";} cerr << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cerr << val << " ";} cerr << endl;}}

signed main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("error.txt", "w", stderr);
// #endif
	crap;

	int h, w, k;
	cin >> h >> w >> k;

	int white = 0;
	vector<vector<int>> arr(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < w; j++) {
			arr[i][j] = str[j] - '0';
			white += arr[i][j];
		}
	}

	if (white <= k) {
		cout << 0 << endl;
		return 0;
	}

	vector<vector<int>> cum(h, vector<int>(w));
	for (int j = 0; j < w; j++) {
		for (int i = 0; i < h; i++) {
			if (i == 0)
				cum[i][j] = arr[i][j];
			else
				cum[i][j] = cum[i - 1][j] + arr[i][j];
		}
	}

	print2d(cum);
	int req = INT_MAX;

	for (int mask = 1; mask <= (1 << (h - 1)); mask++) {

		int ans = 0;
		vector<int> cuts;

		for (int i = 0; i < h; i++) {
			if (mask & (1 << i))
				cuts.push_back(i);
		}

		int sz = cuts.size();

		ans += sz;

		vector<vector<int>> rows(sz + 1, vector<int>(w));

		for (int j = 0; j < w; j++) {
			for (int i = 0; i <= sz; i++ ) {
				if (i == 0)
					rows[i][j] = cum[cuts[i]][j];
				else if (i == sz)
					rows[i][j] = cum[h - 1][j] - cum[cuts[sz - 1]][j];
				else
					rows[i][j] = cum[cuts[i]][j] - cum[cuts[i - 1]][j];
			}

		}

		int curr[sz + 1];
		for (int i = 0; i <= sz; i++)
			curr[i] = rows[i][0];
		memset(curr,0,sizeof(curr));

		for (int j = 1; j < w; j++) {
			for (int i = 0; i <= sz; i++) {
				curr[i] += rows[i][j];
				if (curr[i] > k) {
					 
						ans++;
					for (int i = 0; i <= sz; i++)
						curr[i] = rows[i][j];
					break;
				}
			}
		}

		req = min(ans, req);


	}

	cout << req << endl;


	return 0;
}




