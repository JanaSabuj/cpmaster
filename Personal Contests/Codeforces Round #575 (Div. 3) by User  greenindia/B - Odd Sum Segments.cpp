
1196 B - Odd Sum Segments.cpp GNU C++17 Accepted

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

	int t;
	cin >> t;

///odd
	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> arr(n);
		int ODDSUM = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];

			if (arr[i] & 1) ODDSUM++;
		}
		if (k == 1) {

			if (accumulate(arr.begin(), arr.end(), 0) & 1) {

				cout << "YES" << endl;

				int COUNT = 0;
				for (int i = 0; i < n; i++) {
					if (COUNT >= k - 1) break;
					if (arr[i] & 1) {
						cout << (i + 1) << " ";
						COUNT++;
					}
				}
				cout << n << endl;
			}
			else cout << "NO" << endl;
		}
		else if (ODDSUM >= k && (ODDSUM - k) % 2 == 0) {

			cout << "YES";
			cout<<endl;

			int COUNT = 0;
			for (int i = 0; i < n; i++) {
				if (COUNT >= k - 1) break;
				if (arr[i] & 1) {
					cout << (i + 1) << " ";
					COUNT++;
				}
			}
			cout << n << endl;
		}

		else cout << "NO" << endl;
	}
	 

 //end
	return 0;
}




