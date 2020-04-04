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

vector<int> D1(string s) {
	int n = s.length();
	vector<int> d1(n);
	for (int i = 0, l = 0, r = -1; i < n; i++) {
		int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
		while (0 <= i - k && i + k < n && s[i - k] == s[i + k]) {
			k++;
		}
		d1[i] = k--;
		if (i + k > r) {
			l = i - k;
			r = i + k;
		}
	}

	return d1;
}

vector<int> D2(string s) {
	int n = s.length();
	vector<int> d2(n);
	for (int i = 0, l = 0, r = -1; i < n; i++) {
		int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
		while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k]) {
			k++;
		}
		d2[i] = k--;
		if (i + k > r) {
			l = i - k - 1;
			r = i + k ;
		}
	}

	return d2;
}

vector<int> lengthD1(vector<int> d1) {
	int n = d1.size();
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		ans[i] = 2 * d1[i] - 1;
	}

	return ans;
}

vector<int> lengthD2(vector<int> d2) {
	int n = d2.size();
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		ans[i] = 2 * d2[i];
	}

	return ans;
}

string solve(string str, int x1, int x2) {
	vector<int> d1 = D1(str);
	vector<int> d2 = D2(str);
	vector<int> len_d1 = lengthD1(d1);
	vector<int> len_d2 = lengthD2(d2);

	int max_len = -1;
	int lans = 0;
	int rans = 0;

	for (int i = x1; i <= x2; i++) {
		if (len_d1[i] > max_len) {
			int l = i - (len_d1[i] - 1) / 2;
			int r = i + len_d1[i] / 2;

			if (l == x1 or r == x2) {
				max_len = r - l + 1;
				lans = l;
				rans = r;
			}
		}
	}

	for (int i = x1; i <= x2; i++) {
		if (len_d2[i] > max_len) {
			int l = i - (len_d2[i]) / 2;
			int r = i + len_d2[i] / 2 - 1;

			if (l == x1 or r == x2) {
				max_len = r - l + 1;
				lans = l;
				rans = r;
			}
		}
	}

	string ans = str.substr(lans, max_len);
	return ans;
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
		// string orig = "abcdfdcecba";
		string orig;
		cin >> orig;
		int n = orig.length();

		if(n == 1){
			cout << orig[0] << endl;
			continue;
		}	

		if (orig[0] != orig[n - 1]) {
			string ans = solve(orig, 0, n - 1);
			cout << ans << endl;
		} else {

			int i = 0, j = n - 1;
			int pref = 0;

			while (i < j) {
				if (orig[i] == orig[j]) {
					pref = i;
					i++;
					j--;
				} else
					break;
			}

			 
			string t1 = orig.substr(0, pref + 1);
			
			string t2 = t1;
			reverse(t2.begin(), t2.end());

			string middle = orig.substr(pref + 1, (n - 2*(pref + 1)));
			cerr << middle << endl;
			string ans = solve(middle, 0, (n - 2*(pref + 1)) - 1);
			cout << t1 + ans + t2 << endl;
		}

	}
	return 0;
}




