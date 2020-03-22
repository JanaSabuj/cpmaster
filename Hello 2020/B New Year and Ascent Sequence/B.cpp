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

	int n;
	cin >> n;

	vector<vector<int>> vec;
 

	std::vector<int> NoAscentSmall;
	std::vector<int> NoAscentBig;
 

	int m = n;
	while (m--) {
		int x;
		cin >> x;

		std::vector<int> t;
		while(x--){
			int y;
			cin>>y;
			t.push_back(y);

			reverse(t.begin(), t.end());
			if(is_sorted(t.begin(), t.end())){
				// no ascent
				NoAscentSmall.push_back(*min_element(t.begin(), t.end()));
				NoAscentBig.push_back(*max_element(t.begin(), t.end()));;
			}
		}
 

		 
	}
 	
	int req = n * n;

	int k = NoAscentBig.size();

	sort(NoAscentBig.begin(), NoAscentBig.end());

	for (int i = 0; i < k; ++i)
	{
		/* code */

		int val = NoAscentSmall[i];

		int id = upper_bound(NoAscentBig.begin(), NoAscentBig.end(), val) - NoAscentBig.begin();
		cout << id <<endl;
		req -= id;
	}



	cout << req << endl;


	return 0;
}