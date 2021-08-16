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

int kConcatenationMaxSum(vector<int>& arr, int k) {
	// []
	// [] + []
	// [] + ..... + []

	// kadane for 1 or 2
	int n = arr.size();
	if (n == 1)
		return arr[0];
	int csum = arr[0];
	int msum = arr[0];

	for (int i = 1; i < n * min(2LL, k); i++) {
		csum = max(arr[i % n], (csum + arr[i % n]));
		msum = max(msum, csum);
	}

	if (k == 1 or k == 2)
		return msum;

	// k > 2
	int total = accumulate(arr.begin(), arr.end(), 0LL);
	if (total < 0)
		total = 0;


	int prod = (k - 2) * total;
	int ans = (msum + prod);
	return ans;
}

void solve() {
	int n, k;
	cin >> n >> k;
	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	cout << kConcatenationMaxSum(arr, k) << endl;
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

/*
Also a LC problem. K concatenation.
Do Kadane for k=1 and k=2. Then observations for k > 2.
*/
