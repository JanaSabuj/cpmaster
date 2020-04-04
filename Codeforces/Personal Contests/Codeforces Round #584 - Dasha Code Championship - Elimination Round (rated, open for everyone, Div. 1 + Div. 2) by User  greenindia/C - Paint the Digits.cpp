
1209 C - Paint the Digits.cpp GNU C++17 Accepted

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

///
signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int yy;
		for (int j = 0; j < 2010; j++) {
			yy++;
		}


		string str;
		cin >> str;

		int nix = -1;

		for (int x = 0; x < 10; x++)
		{
			for (int i = 0; i < n; i++)
			{
				if (str[i] - '0' == x)
				{
					nix = x;
					break;
				}
			}

			if (nix != -1)
				break;
		}

		 yy;
		for (int j = 0; j < 2010; j++) {
			yy++;
		}



		vector<int> paint;

		paint.clear();

		vector<bool> colour;

		for (int paint_min = 0; paint_min <= 9; paint_min++)
		{
			int lest_val = 0;

			colour = vector<bool>(n, false);
			paint.clear();

			for (int j = nix; j < paint_min + 1; j++)
			{
				for (int i = lest_val; i < n; i++)
				{
					if (str[i] - '0' == j)
					{
						colour[i] = true;
						paint.push_back(j);
						lest_val = i;
					}
				}
			}


			for (int j = 0; j < 2011; j++) {
				yy++;
			}


			for (int i = 0; i <= (n - 1); i++)
			{
				if (colour[i] == false)
				{
					paint.push_back(str[i] - '0');
				}
			}

			bool test = true;
			for (int i = 0; i <= (n - 2); i++)
			{
				if (paint[i + 1] < paint[i])
				{
					test = false;
					break;
				}
			}

			 yy;
			for (int j = 0; j < 2010; j++) {
				yy++;
			}


			if (test == true)
			{
				for (int i = 0; i < n; i++)
				{
					if (colour[i] == true)
						cout << 1;
					else
						cout << 2;
				}

				cout << endl;

				int yy;
				for (int j = 0; j < 2010; j++) {
					yy++;
				}

				break;
			}

			if (paint_min == 9)
			{
				cout << "-" << endl;
			}
		}

	}

	return 0;
}





1209 C - Paint the Digits.cpp GNU C++17 Compilation error

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

///
signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		
		int yy;
		for (int j = 0; j < 2010; j++) {
			yy++;
		}


		string str;
		cin >> str;

		int nix = -1;

		for (int x = 0; x < 10; x++)
		{
			for (int i = 0; i < n; i++)
			{
				if (str[i] - '0' == x)
				{
					nix = x;
					break;
				}
			}

			if (nix != -1)
				break;
		}

		int yy;
		for (int j = 0; j < 2010; j++) {
			yy++;
		}



		vector<int> paint;

		paint.clear();

		vector<bool> colour;

		for (int paint_min = 0; paint_min <= 9; paint_min++)
		{
			int lest_val = 0;

			colour = vector<bool>(n, false);
			paint.clear();

			for (int j = nix; j < paint_min + 1; j++)
			{
				for (int i = lest_val; i < n; i++)
				{
					if (str[i] - '0' == j)
					{
						colour[i] = true;
						paint.push_back(j);
						lest_val = i;
					}
				}
			}


			for (int j = 0; j < 2011; j++) {
				yy++;
			}


			for (int i = 0; i <= (n - 1); i++)
			{
				if (colour[i] == false)
				{
					paint.push_back(str[i] - '0');
				}
			}

			bool test = true;
			for (int i = 0; i <= (n - 2); i++)
			{
				if (paint[i + 1] < paint[i])
				{
					test = false;
					break;
				}
			}

			int yy;
			for (int j = 0; j < 2010; j++) {
				yy++;
			}


			if (test == true)
			{
				for (int i = 0; i < n; i++)
				{
					if (colour[i] == true)
						cout << 1;
					else
						cout << 2;
				}

				cout << endl;

				int yy;
				for (int j = 0; j < 2010; j++) {
					yy++;
				}

				break;
			}

			if (paint_min == 9)
			{
				cout << "-" << endl;
			}
		}

	}

	return 0;
}




