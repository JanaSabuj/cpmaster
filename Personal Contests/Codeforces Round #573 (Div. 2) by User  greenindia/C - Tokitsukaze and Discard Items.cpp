
1191 C - Tokitsukaze and Discard Items.cpp GNU C++17 Accepted

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<answer<<endl;
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
//int power(int a,int b,int m){int answer=1;while(b){if(b&1)answer=(answer*a)%m;b/=2;a=(a*a)%m;}return answer;}
//int power(int a, int b){int answer=1;while(b){if(b&1)answer=answer*a;b/=2;a=a*a;}return answer;}


signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int m, n, p;
	cin >> m >> n >> p;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ind = 0;
	int answer = 0;
	int minus = 0;


	while (ind != n)
	{
		int e = a[ind] - minus;
		int pa = e / p;
		if (e % p == 0)
			pa--;
		int counter = 0;
		int maximum = (pa + 1) * p;
		for (int i = ind; i < n && i < ind + p; i++)
		{
			if ((a[i] - minus) <= maximum)
				counter++;
			else
				break;
		}
		ind += counter;
		minus += counter;
		answer++;
	}
	cout << answer ;

	cout<<endl;
	 

	return 0;
}




