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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	crap;

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}

	int ans = 0, count = 0;

	for (int i = 0; i < 2 * n; ++i)
	{
		/* code */
		if (arr[i % n] == 1) {
			count++;
			ans = max(ans, count);
		}
		else {

			count = 0;
		}

	}

	cout << ans << endl;


	return 0;

}

