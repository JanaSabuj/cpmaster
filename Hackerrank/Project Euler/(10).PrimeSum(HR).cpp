
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

void Era(bool sieve[], int limit) {
	sieve[0] = false;
	sieve[1] = false;

	for (int i = 2; i * i <= limit ; ++i)
	{
		/* code */
		if (sieve[i] == true) {

			for (int j = i * i; j <= limit; j += i) {
				sieve[j] = false;
			}
		}
	}
}





signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int limit = 1000008;
	// int limit = 5;
	bool sieve[limit+1];
	memset(sieve, true, sizeof(sieve));

	Era(sieve, limit);
 
	map<int, int> sumTillPrime;
	// int sumTillPrime[limit+1];

	int sum = 0;

	for (int i = 0; i <= limit; ++i)
	{
		/* code */
		if (sieve[i] == true) {
			sum += i;
			sumTillPrime[i] = sum;
		}else{

			sumTillPrime[i] = sum;
		}

	}

	int t;
	cin>>t;

	while(t--){
		
		int n;
		cin>>n;

		cout<< sumTillPrime[n] <<endl;

	}




	return 0;
}




