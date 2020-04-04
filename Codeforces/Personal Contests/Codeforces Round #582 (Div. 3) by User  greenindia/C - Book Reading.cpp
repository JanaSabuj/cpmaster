
1213 C - Book Reading.cpp GNU C++17 Accepted

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
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {
    
// 	freopen("input.txt", "r", stdin);
	crap;
 	
 	int t;
 	cin>>t;

 	while(t--){
 		int n, m;
 		cin>>n>>m;

 		int lo = 0, hi = n/m;

 		int arr[10];
 		int sum = 0;
 		for (int i = 0; i < 10; ++i)
 		{
 			/* code */
 			arr[i] = (m*i)%10;
 			sum += arr[i];
 		}

 		// for (int i = 0; i < 10; ++i)
 		// {
 		// 	/* code */
 		// 	// cout << arr[i] <<" ";
 		// }
 		// cout <<endl;

 		int x = hi/10;
 		int rem = hi%10;

 		int ans = x * sum;
 		for (int i = 1; i <= rem; ++i)
 		{
 			/* code */
 			ans += arr[i];
 		}

 		cout << ans <<endl;


 	}

	return 0;
}




