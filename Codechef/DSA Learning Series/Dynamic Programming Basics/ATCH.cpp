/*
Sabuj Jana / @greenindia
https://www.janasabuj.github.io
*/
#include <bits/stdc++.h>
using namespace std;
#define SABUJ_JANA_WF 1
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define double long double
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define endl "\n"
void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}
void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}
const int mod = 1e9 + 7;
int n;
int arr[100005];
void solve() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	if (n == 1) {
		cout << arr[0] << endl;
		return;
	}

	int ans = arr[0];
	int mn = min(0LL, arr[0]);
	int sum = arr[0];

	for (int i = 1; i < n; ++i) {
		sum += arr[i];
		ans = max(ans, sum - mn);
		mn = min(mn, arr[i]);
		// cout << ans << " " << sum << " " << mn << endl;
		if (sum < 0) {
			sum = 0;
			mn = 0;
		}
	}

	cout << ans << endl;
}

signed main() {
	crap;


	int t = 1;
	cin >> t;
	while (t--) solve();


	return 0;
}