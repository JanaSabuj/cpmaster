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
const int N = 1e6 + 7;
int t[N];
vi getDigits(int x) {
	vi ans;
	while (x) {
		int d = x % 10;
		x /= 10;
		ans.push_back(d);
	}
	return ans;
}

int solve(int x) {
	if (x == 0)
		return 0;
	if (x < 0)
		return INT_MAX;
	if (t[x] != -1)
		return t[x];
	//

	vi digits = getDigits(x);
	int ways = INT_MAX;
	for (auto d : digits) {
		if (d != 0)
			ways = min(ways, solve(x - d));
	}

	return t[x] = 1 + ways;
}

signed main() {
	crap;

	memset(t, -1, sizeof(t));
	int n;
	cin >> n;
	cout << solve(n) << endl;

	return 0;
}