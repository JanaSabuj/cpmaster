
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

int binSearchLastOcc(int arr[], int m, int key) {
	int s = 0, e = m - 1;
	int ans = 0;
	bool isFound = false;
	while (s <= e) {

		// int mid = e + (s - e) / 2;
		int mid = (s  + e) / 2;
		if (arr[mid] == key) {
			isFound = true;
			ans = mid;
			s = mid + 1;
		}
		else if (key < arr[mid])
			e = mid - 1;
		else
			s = mid + 1;
	}

	// cout<<ans<<" "<<s<<" "<<e<<endl;

	if(isFound)
		return ans;
	else{
		if(arr[s]<key)
			return s;
		else
			return (s-1);
	}
}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int g;
	cin >> g;

	while (g--) {
		int n, m, x;
		cin >> n >> m >> x;

		int A[n], B[m];
		for (int i = 0; i < n; ++i)
		{

			/* code */
			cin >> A[i];
		}
		for (int i = 0; i < m; ++i)
		{
			/* code */
			cin >> B[i];
		}

		int pA[n], pB[m];
		pA[0] = A[0];
		pB[0] = B[0];

// cout<<pA[0]<<" ";

		for (int i = 1; i < n; ++i)
		{
			/* code */
			pA[i] = A[i] + pA[i - 1];
			// cout<<pA[i]<<" ";
		}
		// cout<<endl<<pB[0]<<" ";
		for (int i = 1; i < m; ++i)
		{
			/* code */
			pB[i] = B[i] + pB[i - 1];
			// cout<<pB[i]<<" ";
		}


		int ans = 0;
		 

		for (int i = 0; i < n; ++i)
		{
			/* code */
			if (pA[i] <= x) {
				int id1 = i + 1;
				// cout<<binSearchLastOcc(pB, m, (x - pA[i]))<<endl;
				// int id2 = binSearchLastOcc(pB, m, (x - pA[i])) + 1;
				int id2 = upper_bound(pB,pB+m,(x - pA[i])) - pB;
				ans = max(ans, id1 + id2);
			}
			else {
				// int id2 = binSearchLastOcc(pB, m, x) + 1;
				int id2 = upper_bound(pB,pB+m,(x)) - pB;
				ans = max(ans,id2);
			}
		}

		cout << ans	 << endl;

	}
	return 0;
}




