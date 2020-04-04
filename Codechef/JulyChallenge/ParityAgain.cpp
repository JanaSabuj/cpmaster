
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
bool findParity(int x)
{
	int y = x ^ (x >> 1);
	y = y ^ (y >> 2);
	y = y ^ (y >> 4);
	y = y ^ (y >> 8);
	y = y ^ (y >> 16);

	// Rightmost bit of y holds the parity value
	// if (y&1) is 1 then parity is odd else even
	if (y & 1)
		return 1;
	return 0;
}



signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--) {
		int q;
		cin >> q;

		set<int> s;
		int even = 0, odd = 0;

		int x;
		cin >> x;
		if (findParity(x) == 0)
			even++;
		else
			odd++;
		s.insert(x);

		q--;

		cout<<even<<" "<<odd<<endl;

		while (q--) {
			int e;
			cin >> e;

			auto it = s.find(e);
			if(it != s.end())
			{
				cout<<even<<" "<<odd<<endl;
				continue;
			}

			std::vector<int> temp;
			for (auto m : s) {
				int y = (e ^ m);
				if (findParity(y) == 0)
					even++;
				else
					odd++;
				// s.insert(y);
				temp.push_back(y);

			}

			for(auto u: temp)
				s.insert(u);

			if (findParity(e) == 0)
				even++;
			else
				odd++;
			s.insert(e);

			cout<<even<<" "<<odd<<endl;

		}

	}



	return 0;
}




