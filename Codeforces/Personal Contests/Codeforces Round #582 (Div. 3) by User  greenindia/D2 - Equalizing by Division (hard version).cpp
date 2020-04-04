
1213 D2 - Equalizing by Division (hard version).cpp GNU C++17 Accepted

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

// 	freopen("input.txt", "r", stdin);
	crap;

	int n, k;
	cin >> n >> k;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}

	sort(arr, arr+n);

	map<int,int> hash;

	map<int,int> ops;
	int x;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		x++;
	}


	for (int i = 0; i < n; ++i)
	{
		/* code */
		hash[arr[i]]++;
		int val = arr[i];
		int cnt = 0;

		while(val){

			val/=2;
			cnt++;
			if(hash[val] < k){

				hash[val]++;
				ops[val]+= cnt;

			}


		}

	}

	int req = LLONG_MAX;
	int nax = *max_element(arr,arr+n);

	for (int i = 0; i <= nax; i++)
	{
		if (hash[i] >= k)
			req = min(req , ops[i]);
	}

	cout << req <<endl;


	return 0;
}




