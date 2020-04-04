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

	// freopen("input.txt", "r", stdin);
	crap;

	string str;
	cin >> str;

	std::vector<set<int>> vec(26);// each index represents corrsp alphabet

	for (int i = 0; i < str.length(); ++i)
	{
		/* code */
		vec[str[i] - 'a'].insert(i); // positions of occurence
	}



	int q;
	cin >> q;

	while (q--) {

		int swi;
		cin >> swi;

		if (swi == 1) {

			int x;
			char c;
			cin >> x >> c;
			--x;
			// cout << c <<endl;
			vec[str[x] - 'a'].erase(x);
			str[x] = c;
			vec[str[x] - 'a'].insert(x);
		}
		else {

			int cnt = 0;
			int l,r;
			cin>>l>>r;
			l--;
			r--;

			//traverse the entire vector of sets
			for (int i = 0; i < 26; ++i)
			{
				/* code */
				auto it = vec[i].lower_bound(l);
				if(it!=vec[i].end() and *it<=r)
					cnt++;
			}

			cout << cnt << endl;
		}


	}

	return 0;
}