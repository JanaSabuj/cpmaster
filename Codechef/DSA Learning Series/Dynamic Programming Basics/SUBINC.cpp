/*
Sabuj Jana / @greenindia
https://www.janasabuj.github.io
*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define double long double
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define endl "\n"
void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}
void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}
const int N = 0;

void solve() {
	int n;
	cin >> n;
	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int len = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		if (i == 0)
			len++;
		else if (arr[i] >= arr[i - 1])
			len++;
		else {
			sum += len * (len + 1) / 2;
			len = 1;
		}
	}

	sum += len * (len + 1) / 2;

	cout << sum << endl;
}

signed main() {
	crap;

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
