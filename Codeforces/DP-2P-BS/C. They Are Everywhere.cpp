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

	int n; cin >> n;
	string str; cin >> str;

	set<int> s;
	for (auto x : str)
		s.insert(x);

	int dist_count = s.size();

	int freq[256] = {0};

	int count = 0;
	int start = 0, global = LLONG_MAX;
	for (int j = 0; j < n; j++) {

		freq[str[j]]++;
		if (freq[str[j]] == 1)
			count++;

		if (count == dist_count) {

			//i've found a window. now trim it from the start side

			while (freq[str[start]] > 1) {


				freq[str[start]]--;
				start++;


			}

			global = min(global, j - start + 1);


		}


	}

	cout << global << endl;
	return 0;

}

