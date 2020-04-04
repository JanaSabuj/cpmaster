
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


signed main() {
 
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> arr[i];
			sum += arr[i];
		}

		double avg = (double) sum / (double) n;

		double rem[n];
		bool isFound = false;
		int ans=LLONG_MAX;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			rem[i] = sum - arr[i];
			double temp = rem[i] / (double) (n - 1);
			if (temp == avg) {
				ans=i;
				isFound = true;
				break;
			}
		}

		if(isFound)
			cout<<ans+1<<endl;
		else
			cout<<"Impossible"<<endl;

	}



	return 0;
}




