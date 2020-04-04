
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

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		string str;
		cin >> str;

		int N = str.length();
		int count = 0;
		for (int i = 1; i * i + i <= N ; ++i)
		{
			/* code */
			int k = i * i + i; //slider length

			int zeroes = 0, ones = 0;
			
			//initial k units
			for (int j = 0; j < k; j++) {
				if (str[j] == '0')
					zeroes++;
				else
					ones++;
			}


			if (ones == i)
				count++;

			for (int j = k; j < N; j++) {
				if (str[j - k] == '0')
					zeroes--;
				else
					ones--;

				if (str[j] == '0')
					zeroes++;
				else
					ones++;

				if (ones == i)
					count++;

			}

		}

		cout << count << endl;

	}


	return 0;
}




