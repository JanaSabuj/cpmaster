
1119 C - Ramesses and Corner Inversion.cpp GNU C++17 Accepted
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define dbg(x) cerr << #x << " = " << x << endl
 #define endl "\n"
 // #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 const int INF=1e9+5;//billion
 #define MAX 100007
 string alpha="abcdefghijklmnopqrstuvwxyz";
//power (a^b)%m
 int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
#define ll long long 
 
int main() {
// 	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
	ll n, m;
	cin >> n >> m;
	ll A[n + 1][m + 1];
	ll B[n + 1][m + 1];
 
	ll i,j;
	for (i = 0;i < n; i++) {
		for (j = 0;j < m;j++) {
			cin >> A[i][j];
		}
	}
 
	for (i = 0;i < n; i++) {
		for (j = 0;j < m;j++) {
			cin >> B[i][j];
		}
	}
 
	for (i = 0;i < n - 1;i++) {
		for (j = 0; j < m - 1; j++) {
			if (A[i][j] != B[i][j]) {
				A[i][j] = 1 - A[i][j];
				A[i + 1][j] = 1 - A[i + 1][j];
				A[i + 1][j + 1] = 1 - A[i + 1][j + 1];
				A[i][j + 1] = 1 - A[i][j + 1];
			}
		}
	}
 
	string flag = "Yes";
 
	for (i = 0;i < n; i++) {
		for (j = 0;j < m;j++) {
			if (A[i][j] != B[i][j]) {
				flag = "No";
			}
		}
	}
	cout << flag;
	return 0;
}