/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define endl "\n"
// #define int long long int
#define double long double
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair
#define PI acos(-1)
// #define ll long long

#define MAX 100007

signed main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	crap;

	int n;
	cin >> n;

	int q[n];
	for (int i = 1; i < n; ++i)
	{
		/* code */
		cin >> q[i];
	}

	int ans = INT_MAX, sum = 0;
	for (int i = 1; i < n; ++i)
	{
		/* code */
		sum += q[i];
		ans = min(ans, sum);
	}

	// cout<<ans<<endl;
	int p[n];
	p[0] = max(1 - ans, 1);

	if(p[0]>n or p[0]<1)  {cout << -1 << endl; return 0;}
	set<int> s;
	s.insert(p[0]);
	for (int i = 1; i < n; ++i)
	{
		/* code */
		p[i] = p[i - 1] + q[i];
		if (p[i] > n or p[i] < 1) {cout << -1 << endl; return 0;}

		if (s.find(p[i]) == s.end())
			s.insert(p[i]);
		else
		{cout << -1 << endl; return 0;}

	}

	if(s.size()!=n) {cout << -1 << endl; return 0;}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << p[i] << " ";
	}

	return 0;

}

