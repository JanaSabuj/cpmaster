
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
bool isSafe(int i, int j){
	if((i>=0 and i<20) and (j>=0 and j<20))
		return true;
	else
		return false;
}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int arr[20][20];
	for (int i = 0; i < 20; ++i)
	{
		/* code */

		for (int j = 0; j < 20; j++) {
			cin >> arr[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < 20; ++i)
	{
		/* code */

		for (int j = 0; j < 20; j++) {

			int prodR = arr[i][j];
			if (isSafe(i + 3, j)) {

				for (int k = 1; k < 4; ++k)
				{
					/* code */

					prodR *= arr[i + k][j];
				}

			} else
				prodR = -1;

			 

			int prodT = arr[i][j];
			if (isSafe(i , j + 3)) {

				for (int k = 1; k < 4; ++k)
				{
					/* code */

					prodT *= arr[i][j + k];
				}

			} else
				prodT = -1;

			 

			int prodLD = arr[i][j];
			if (isSafe(i + 3 , j - 3)) {

				for (int k = 1; k < 4; ++k)
				{
					/* code */

					prodLD *= arr[i + k][j - k];
				}

			} else
				prodLD = -1;
			int prodRD = arr[i][j];
			if (isSafe(i + 3 , j + 3)) {

				for (int k = 1; k < 4; ++k)
				{
					/* code */

					prodRD *= arr[i + k][j + k];
				}

			} else
				prodRD = -1;


         ans = max({ans, prodR, prodT, prodLD, prodRD});


		}
	}

	cout<<ans<<endl;

	return 0;
}




