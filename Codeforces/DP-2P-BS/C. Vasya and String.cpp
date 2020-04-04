//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India
//God is Great
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define endl "\n"
#define int long long int
#define double long double
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair
#define PI acos(-1)

signed main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	crap;

	int sz, d;
	cin >> sz >> d;

	string str;
	cin >> str;

	int i = 0, j = 0, global = -1, count = 0;

	for (int i = 0; i < sz; ++i)
	{


		while (j < sz) {
			if (str[j] == 'a') j++;
			else {
				if (count < d) {count++; j++;}
				else break;
			}
		}


		global = max(global, j - i );
		if (str[i] == 'b') count--;


	}

	 i = 0, j = 0, count = 0;

	for (int i = 0; i < sz; ++i)
	{


		while (j < sz) {
			if (str[j] == 'b') j++;
			else {
				if (count < d) {count++; j++;}
				else break;
			}
		}


		global = max(global, j - i );
		if (str[i] == 'a') count--;


	}


	cout << global << endl;
	return 0;

}

