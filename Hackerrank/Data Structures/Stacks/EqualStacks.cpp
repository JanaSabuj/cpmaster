
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

	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	int a[n1], b[n2], c[n3];

	int maxa, maxb, maxc;
	maxa = 0;
	maxb = 0;
	maxc = 0;

	for (int i = 0; i < n1; ++i)
	{
		/* code */
		cin >> a[i];
		maxa += a[i];

	}

	for (int i = 0; i < n2; ++i)
	{
		/* code */
		cin >> b[i];
		maxb += b[i];
	}

	for (int i = 0; i < n3; ++i)
	{
		/* code */
		cin >> c[i];
		maxc += c[i];

	}

	int d1 = 0, d2 = 0, d3 = 0;


	while (1) {

		if ((maxa == maxb) and (maxb == maxc)) {
			cout << maxa << endl;
			break;
		}

		if (d1 == n1 or d2 == n2 or d3 == n3) {
			cout << 0 << endl;
			break;
		}

		int currMax = max(maxa, max(maxb, maxc));
		if (currMax == maxa) {

			maxa -= a[d1];
			d1++;
		}
		if (currMax == maxb) {

			maxb -= b[d2];
			d2++;
		}
		if (currMax == maxc) {

			maxc -= c[d3];
			d3++;
		}


	}

	return 0;
}




