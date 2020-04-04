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

vector<int> LPS(string pattern){

	int n=pattern.length();
	vector<int> lps(n);
	lps[0]=0;
	int j=0,i=1;
	
	while(i<n){
		if(pattern[j]==pattern[i]){
			lps[i]=j+1;
			i++;
			j++;
		}
		else {
			if(j!=0)
				j=lps[j-1];
			else{
				lps[i]=0;
				i++;
			}
		}
	}

	return lps;

}


string solve(string str){
	
	string t = str;
	reverse(t.begin(), t.end());
	string cum = str + '$' + t;
	int n = cum.length();

	vector<int> prefix = LPS(cum);
	int val1 = prefix[n-1];

	string cum2 = t + '$' + str;
	vector<int> suffix = LPS(cum2);
	int val2 = suffix[n-1];

	if(val1 > val2){
		return str.substr(0, val1);
	}else
		return t.substr(0, val2);

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
			string ans = solve(orig);
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
			string ans = solve(middle);
			cout << t1 + ans + t2 << endl;
		}

	}
	return 0;
}




