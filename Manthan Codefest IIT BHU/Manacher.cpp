
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


signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	string str;
	cin >> str;

	int n = str.length();
	if (n == 0) cout << " " << endl;

	std::vector<int> d1(n);

	for (int i = 0, l = 0, r = -1; i < n; i++) {
		int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);

		while (str[i + k] == str[i - k] and (i - k) >= 0 and (i + k) < n) {
			k++;
		}

		d1[i] = k;
		k--;

		if ((i + k) > r) {
			l = i - k;
			r = i + k;
		}

	}



	std::vector<int> d2(n);

	for (int i = 0, l = 0, r = -1; i < n; i++) {

		int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);

		while (str[i + k] == str[i - k - 1] and (i + k) < n and (i - k - 1) >= 0) {
			k++;
		}

		d2[i] = k--;

		if ((i + k) > r) {
			l = i - k - 1;
			r = i + k;
		}


	}


	for(auto x:d1)
		cout << x <<" ";


	return 0;
}




