
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

bool isSub(string s, string t) {

	int n = t.size();
	int m = s.size();

	int j = 0;
	for (int i = 0; i < n and j < m; ++i)
	{
		/* code */
		if (t[i] == s[j])
			j++;



	}

	if (j == m)
		return true;
	else
		return false;


}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int q;
	cin >> q;

	while (q--) {

		string s, t, p;
		cin >> s >> t >> p;

		if (isSub(s, t)) {

			map<char, int> hashS, hashT, hashP;

			for (auto x : s)
				hashS[x]++;
			for (auto x : t)
				hashT[x]++;
			for (auto x : p)
				hashP[x]++;

			// for (auto x : hashS) {
			// 	cout << x.first << " " << x.second << "";
			// }
			// cout << endl;
			// for (auto x : hashT) {
			// 	cout << x.first << " " << x.second << "";
			// }
			// cout << endl;
			// for (auto x : hashP) {
			// 	cout << x.first << " " << x.second << "";
			// }


			for (auto x : hashT) {
				hashT[x.first] -= hashS[x.first];
			}

			



			bool isYes = true;

			for (auto x : hashT) {
				if (hashT[x.first] > hashP[x.first]) {
					isYes = false;
					break;

				}
			}




			if (isYes)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

		}
		else {
			cout << "NO" << endl;
		}




	}


	return 0;
}




