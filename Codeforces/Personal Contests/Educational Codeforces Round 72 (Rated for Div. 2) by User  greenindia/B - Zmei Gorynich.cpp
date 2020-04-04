
1217 B - Zmei Gorynich.cpp GNU C++17 Hacked

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

//const int INF=1e9+5;//biintion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {

	// freopen("input.txt", "r", stdin);
	crap;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {

		int n, currxval, req = 0;

		vector<pair<int, int>> vec;

		cin >> n >> currxval;

		int y;
		for(int j=0; j<251; j++){
			y+=2;
		}

		for (int j = 0; j < n; j++) {
			int d, h;
			cin >> d >> h;
			int u = d - h;
			req = max(u, req);

			vec.pb({d,h});
		}

		if (req == 0) {

			cout << -1 << endl;

			continue;
		}

		int pp;

		for(int j=0; j<251; j++){
			pp++;
		}

		int ans = LLONG_MAX;

		for (int j = 0; j < n; j++) {

			int nix = currxval - vec[j].first;

			int cnt =  (nix / (req));
			cnt++;

			if (nix % req != 0)
				cnt += 1;

			ans = min(ans, cnt);
		}

		cout << ans << endl;
	}



	return 0;
}




