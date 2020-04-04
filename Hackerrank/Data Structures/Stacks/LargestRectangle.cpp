
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


//classical ACM ICPC 2003-04 problem
int getMaxAreaUnderHistogram(int h[], int n) {
	int ans = 0;
	int i = 0;
	stack<int> s;

	while (i < n) {

		if (s.empty() or h[i] >= h[s.top()])
			s.push(i++);
		else {
			int tp = s.top();
			s.pop();

			int tempArea = h[tp] * (s.empty() ? i : (i - s.top() - 1));
			ans = max(ans, tempArea);
		}


	}

	while (s.empty() == false) {

		int tp = s.top();
		s.pop();

		int tempArea = h[tp] * (s.empty() ? i : (i - s.top() - 1));
		ans = max(ans, tempArea);

	}
	return ans;
}


signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;

	int h[n];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> h[i];
	}

	cout << getMaxAreaUnderHistogram(h, n);

	return 0;
}




