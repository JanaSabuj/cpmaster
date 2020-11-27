//------------------------------God is Great---------------------------------
//------------------------Sabuj Jana | JU | greenindia-----------------------
//------------------------janasabuj.github.io-----------------------
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

void check(vi& arr, vi& pows, int val) {
	// cout << val << endl;
	int sum = 0;
	int n = arr.size();

	for (int i = 0; i < n ; i++) {
		sum += arr[i];
		if (sum == val)
			sum = 0;
		else if (sum > val)
			return;
	}

	if (sum != 0)
		return;

	pows.push_back(val);
}

signed main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
// #endif
	crap;

	int n;
	cin >> n;
	vi arr(n);
	int mx = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		sum += arr[i];
		mx = max(mx, arr[i]);
	}

	vi pows;
	for (int i = 1; i <= sqrt(sum); i++) {
		if (sum % i == 0) {
			if (sum / i == i)
				check(arr, pows, i);
			else {
				check(arr, pows, i);
				check(arr, pows, sum / i);
			}
		}
	}

	sort(pows.begin(), pows.end());
	for (auto x : pows)
		if (x >= mx)
			cout << x << " ";

	return 0;
}