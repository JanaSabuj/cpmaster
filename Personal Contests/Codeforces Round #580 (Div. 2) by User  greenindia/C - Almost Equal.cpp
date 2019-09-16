
1206 C - Almost Equal.cpp GNU C++17 Accepted

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

	int n;
	cin >> n;

	if (!(n&1)) {
		cout << "NO" << endl;
		return 0;
	}

	int dp[2 * n];
	for (int i = 0; i <= n-1; i = i + 2) {
		dp[i] = i + 1;
	}
	for (int i = 1; i <= n - 1; i = i + 2) {
		dp[i] = 2 * n - (i - 1);
	}
	for (int i = n; i <= 2 * n - 1; i = i + 2) {
		dp[i] = dp[i - n] + 1;
	}
	for (int i = n + 1; i <= 2 * n - 1; i = i + 2) {
		dp[i] = dp[i - n] - 1;
	}

	cout << "YES" <<endl;
	for (int i = 0; i < 2 * n; i++) {
		cout << dp[i] << " ";
	}


	return 0;
}





1206 C - Almost Equal.cpp GNU C++17 Wrong answer on pretest 1
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r" , stdin);
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << "NO";
		return 0;
	}
	cout << "YES" << endl;
	int arr[2 * n];
	for (int i = 0; i < n; i = i + 2) {
		arr[i] = i + 1;
	}
	for (int i = 1; i < n; i = i + 2) {
		arr[i] = 2 * n - (i - 1);
	}
	for (int i = n; i < 2 * n; i = i + 2) {
		arr[i] = arr[i - n] + 1;
	}
	for (int i = n + 1; i < 2 * n; i = i + 2) {
		arr[i] = arr[i - n] - 1;
	}
	for (int i = 0; i < 2 * n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}