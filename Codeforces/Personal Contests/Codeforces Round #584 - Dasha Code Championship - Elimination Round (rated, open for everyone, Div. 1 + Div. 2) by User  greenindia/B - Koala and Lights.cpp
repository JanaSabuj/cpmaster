
1209 B - Koala and Lights.cpp GNU C++17 Accepted

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
int power(int a, int b, int m) {int ans = 1; while (b) {if (b & 1)ans = (ans * a) % m; b /= 2; a = (a * a) % m;} return ans;}
int power(int a, int b) {int ans = 1; while (b) {if (b & 1)ans = ans * a; b /= 2; a = a * a;} return ans;}
const int MX = 1001;



signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int temp[MX];


	int arr[MX];
	int brr[MX];

	int req = 0;
	int mini = 0;


	int n;
	cin >> n;

	string str;
	cin >> str;

	for (int i = 0; i < n; i++)
	{
		temp[i] = (str[i] - '0');
		if (temp[i])
			req++;
	}


	for (int i = 0; i < n; i++)
		cin >> arr[i] >> brr[i];

	string abc;

	int p = 1e3 + 21;


	while (mini < p || req == n)
	{
		for (int i = 0; i <= (n - 1); i++)
		{
			if (mini >= brr[i])
			{

				int val = mini - brr[i];
				if ((val) % arr[i] == 0)
				{
					temp[i]++;
					temp[i] = temp[i] % 2;
				}
			}
		}

		int yy;
		for (int j = 0; j < 2010; j++) {
			yy++;
		}



		int nix = 0;
		for (int i = 0; i <= (n - 1); i++)
			nix = nix + temp[i];

		req = max(req, nix);

		if (req == n)
			break;

		mini = mini + 1;

	}

	cout << req ;

	cout << endl;

	return 0;
}





1209 B - Koala and Lights.cpp GNU C++17 Wrong answer on pretest 1

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
int power(int a, int b, int m) {int ans = 1; while (b) {if (b & 1)ans = (ans * a) % m; b /= 2; a = (a * a) % m;} return ans;}
int power(int a, int b) {int ans = 1; while (b) {if (b & 1)ans = ans * a; b /= 2; a = a * a;} return ans;}
const int MX = 1001;

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int temp[MX];


	int arr[MX];
	int brr[MX];

	int req = 0;
	int mini = 0;

	int n;
	cin >> n;

	string str;
	cin >> str;

	for (int i = 0; i < n; i++)
	{
		temp[i] = (str[i] - '0');
		if (temp[i] == 1)
			req++;
	}


	for (int i = 0; i < n; i++)
		cin >> arr[i] >> brr[i];

	string abc;

	int p = LLONG_MAX;
	int nix = 0;
	nix = 1;

	while (mini < p || req == n)
	{
		for (int i = 0; i <= (n - 1); i++)
		{
			if (mini >= brr[i])
			{

				int val = mini - brr[i];
				if ((val) % arr[i] == 0)
				{
					temp[i]++;
					temp[i] = temp[i] % 2;
				}
			}
		}

		int yy;
		for (int j = 0; j < 2010; j++) {
			yy++;
		}



		nix--;
		for (int i = 0; i <= (n - 1); i++)
			nix = nix + temp[i];

		req = max(req, nix);

		if (req == n)
			break;

		mini = mini + 1;

	}

	cout << req ;

	cout << endl;

	return 0;
}




