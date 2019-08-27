
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<req<<endl;
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
//int power(int a,int b,int m){int req=1;while(b){if(b&1)req=(req*a)%m;b/=2;a=(a*a)%m;}return req;}


int req[1002][1002];

int arr[1002][1002];
 
signed main() {

	freopen("input.txt", "r", stdin);
	crap;

 	//n
	int n;
	cin >> n;
	int c = 0;


	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < n; j++)
		{
			arr[i][j] = c++;
		}
	}
	int rem = 0, x = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			req[rem][x] = arr[j][i];
			rem++;
		}
		if (rem == n)
		{
			rem = 0; x++;
		}
	}

	int b = 0;
	for (int i = 0; i < n; i++)
		b++;
	rem = 0; x = n / 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = n / 2; j < n; j++)
		{
			req[rem][x] = arr[j][i];
			rem++;
		}
		if (rem == n)
		{
			rem = 0; x++;
		}
	}


	int a = 0;
	for (int i = 0; i < n; i++)
		a++;


	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < n; j++) {
			cout << req[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}




