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
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

int fac(int n) {
	if (n == 0 or n == 1)
		return n;
	return n * fac(n - 1);
}


signed main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	crap;

	int n;
	cin >> n;

	int freq[26] = {0};

	for (int i = 0; i < n; ++i)
	{
		/* code */
		string str;
		cin >> str;
		freq[str[0] - 'a']++;


	}

	int ans = 0;


	for (int i = 0; i < 26; ++i)
	{
		/* code */
		if (freq[i] > 1)
		{
			int x = freq[i] / 2;
			int y = freq[i] - x;

			int ans=0;
			if(x>1)
			  ans = fac(x) / (2 * fac(x - 2));
			if(y>1)
				ans += fac(y) / (2 * fac(y - 2));


		}
	}

	cout << ans << endl;

	return 0;
}

