
1207 B - Square Filling.cpp GNU C++17 Accepted

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
int n, m;
int arr[51][51];
bool isSafe(int x, int y) {
	if (x >= 0 and x<n and y >= 0 and y < m) {
		if (arr[x][y] == 1)
			return true;
	}

	return false;
}

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;



	cin >> n >> m;

	int zer = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0)
				zer++;
		}
	}

	int mat[51][51];
	memset(mat, 0, sizeof(mat));

	if (zer == n * m) {
		cout << 0 << endl;
		return 0;
	}
	int req = 0;
	std::vector<pair<int, int>> vec;

	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {

			if (arr[i][j] == 1) {
				if (isSafe(i, j) and isSafe(i, j + 1) and isSafe(i + 1, j) and isSafe(i + 1, j + 1))
				{
					vec.push_back({i, j});
					mat[i][j] = 1;
					mat[i][j + 1] = 1;
					mat[i + 1][j] = 1;
					mat[i + 1][j + 1] = 1;
				}
			}
		}
	}

	bool f = true;
	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {
			if (arr[i][j] != mat[i][j])
			{	f = false;

				break;
			}
		}
	}

	if ( (!f) or vec.size() == 0 or vec.size() > 2500) cout << -1 << endl;
	else {

		cout << vec.size() << endl;
		for (auto x : vec)
			cout << x.first + 1 << " " << x.second + 1 << endl;

	}


	return 0;
}





1207 B - Square Filling.cpp GNU C++17 Wrong answer on test 9

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
int n, m;
int arr[51][51];
bool isSafe(int x, int y) {
	if (x >= 0 and x<n and y >= 0 and y < m) {
		if (arr[x][y] == 1)
			return true;
	}

	return false;
}

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;


	cin >> n >> m;

	int zer = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0)
				zer++;
		}
	}

	if (zer == n * m) {
		cout << 0 << endl;
		return 0;
	}
	int req = 0;
	std::vector<pair<int, int>> vec;

	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {

			if (arr[i][j] == 1) {
				if (isSafe(i, j) and isSafe(i, j + 1) and isSafe(i + 1, j) and isSafe(i + 1, j + 1))
				{
					vec.push_back({i, j});
				}
			}
		}
	}

	if (vec.size() == 0) cout << -1 << endl;
	else {
		cout << vec.size() << endl;
		for (auto x : vec)
			cout << x.first + 1 << " " << x.second + 1 << endl;

	}


	return 0;
}




