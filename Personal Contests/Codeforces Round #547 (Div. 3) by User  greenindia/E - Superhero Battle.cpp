
1141 E - Superhero Battle.cpp GNU C++17 Accepted
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define endl "\n"
#define int long long int
#define double long double
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair
#define PI acos(-1)

#define MAX 100007

signed main() {
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	freopen("error.txt", "w", stderr);
	crap;

	int x, n;
	cin >> x >> n;

	int arr[n + 1];
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		cin >> arr[i];

	}

	arr[0] = 0;
	int mpref = INT_MAX;

	for (int i = 1; i <= n; ++i)
	{
		/* code */
		arr[i] += arr[i - 1];
		mpref = min(mpref, arr[i]);
	}



	for (int i = 1; i <= n; ++i)
	{
		if (x + arr[i] <= 0) {
			cout << i << endl;
			return 0;
		}
	}

	int sum = arr[n];

	if (sum >= 0) {cout << -1 << endl; return 0;}

	int m = ceil ( (double) (x + mpref) / (-sum));
	// cout<<sum<<endl;
	// cout<<x<<endl;
	// cout<<mpref<<endl;
	// cout<<m;

	int start = x + sum * m;
	int ans = m * n;
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		if (start + arr[i] <= 0)
		{
			ans += i;
			cout << ans << endl;
			break;
		}

	}

	return 0;

}

