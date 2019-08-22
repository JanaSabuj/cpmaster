
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<req<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)


int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int req=1;while(b){if(b&1)req=(req*a)%m;b/=2;a=(a*a)%m;}return req;}
//int power(int a, int b){int req=1;while(b){if(b&1)req=req*a;b/=2;a=a*a;}return req;}


signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	int n;
	int a, b;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b >> s;
		vector<int> vec;
		int current = 0, cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			/*code*/
			if (s[i] - '0' == current) {
				cnt++;
			} else {
				vec.pb(cnt);
				cnt = 1;
				current ^= 1;
			}
		}
		vec.pb(cnt);
		int req = 0;
		for (int i = 0; i < vec.size(); i++) {
			if (i & 1) {
				req += (vec[i] + 1) * 2 * b + vec[i] * a;
			} else {
				int x = (vec[i] - 1) * b + vec[i] * a;
				if (i + 1 < vec.size()) x += a;
				if (i - 1 >= 0) x += a;
				int y = (1LL << 61);
				if (i + 1 < vec.size() && i - 1 >= 0) {
					y = (vec[i] - 1) * 2 * b + vec[i] * a;
				}
				req += min(x, y);
			}
		}
		req += 2 * b;
		cout << req << '\n';

	}

	return 0;
}




