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

signed main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
// #endif
	crap;

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int a = sqrt(5 * n * n + 4);
		int b = sqrt(5 * n * n - 4);

		if (a * a == (5 * n * n + 4) || b * b == (5 * n * n - 4))
			cout << "IsFibo" << endl;
		else
			cout << "IsNotFibo" << endl;

	}



	return 0;
}