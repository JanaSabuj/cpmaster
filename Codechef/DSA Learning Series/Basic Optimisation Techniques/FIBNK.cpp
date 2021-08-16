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

// if n is odd, F(n) = F(k)^2 + F(k-1)^2 [k = (n+1)/2]
// if n is even, F(n) = (2*F(k-1) + F(k)) * F(k) [k = n/2]
const int mod = 1e9 + 7;

// map<int, int> mp;
// int fibosum(int n) {
// 	if (n == 0 || n == 1)
// 		return n;
// 	if (n == 2)
// 		return 1;

// 	if (mp.find(n) != mp.end())
// 		return mp[n];

// 	int k;
// 	int val;

// 	if (n & 1) {
// 		k = (n + 1) / 2;
// 		val = (fibosum(k) % mod * fibosum(k) % mod + fibosum(k - 1) % mod * fibosum(k - 1) % mod) % mod;
// 	} else {
// 		k = n / 2;
// 		val = (((2 * fibosum(k - 1) % mod + fibosum(k) % mod)) % mod * fibosum(k) % mod) % mod;
// 	}

// 	return mp[n] = val;
// }

void mul(int A[2][2], int B[2][2]) {
	int x = A[0][0] * B[0][0] + A[0][1] * B[1][0];
	int y = A[0][0] * B[0][1] + A[0][1] * B[1][1];
	int z = A[1][0] * B[0][0] + A[1][1] * B[1][0];
	int w = A[1][0] * B[0][1] + A[1][1] * B[1][1];

	A[0][0] = x % mod;
	A[0][1] = y % mod;
	A[1][0] = z % mod;
	A[1][1] = w % mod;
}

void power(int F[2][2], int n) {

	if (n == 0 || n == 1)
		return;

	int M[2][2] = {{1, 1}, {1, 0}};

	power(F, n / 2);
	mul(F, F);

	if (n & 1)
		mul(F, M);
}

int fib(int n) {
	if (n == 0 || n == 1)
		return n;

	int M[2][2] = {{1, 1}, {1, 0}};
	power(M, n - 1);

	return M[0][0];
}

int cal(int n) {
	return (fib(n + 1) - 1) % mod;
}

void solve() {
	int n, k;
	cin >> n >> k;
	int q = n / k;
	int r = n % k;
	int f1 = cal(k);
	int f2 = cal(r);

	cout << (((f1 * q) % mod + f2) % mod ) << endl;
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