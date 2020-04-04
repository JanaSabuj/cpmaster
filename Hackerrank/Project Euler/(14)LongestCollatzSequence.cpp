
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

std::map<int, int> noTerms;
std::map<int, int> noMaxNoTillNow;
int collatz(int n) {

	if (n == 1)
		return 1;

	if(noTerms[n] != 0)
		return noTerms[n];

	if (!(n & 1))
	{

		int x = n / 2;
		noTerms[n] = 1 + collatz(x);
		return noTerms[n];
	}
	else {
		int y = 3 * n + 1;
		noTerms[n] = 1 + collatz(y);
		return  noTerms[n];
	}

}



signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	// int limit = 5000005;
	// int limit = 10;
	// int arr[limit];
	for (int i = 1; i <= limit ; ++i)
	{
		/* code */
		noTerms[i] = collatz(i);

	}

	// for (auto x : noTerms)
	// 	cout << x.first << " " << x.second << endl;

	
 





	return 0;
}




