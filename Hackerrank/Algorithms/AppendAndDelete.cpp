
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

	freopen("input.txt", "r", stdin);
	crap;

	string s1, s2;
	int k;
	cin >> s1 >> s2 >> k;

	int c = 0; //common letters

	for (int i = 0; i < min(s1.length(), s2.length()) ; i++) {

		if (s1[i] == s2[i])
			c++;
		else
			break;

	}

	int x = s1.length() - c; // uncommon letters to be deleted in s1
	int y = s2.length() - c; // uncommon letters to be added to s1

	bool isYes = false;
	if ( k >= (x + y) and k <= (x + y + 2 * c)) {
		if ( (k - (x + y)) % 2 == 0) {
			isYes = true;

		}
	} else if ( k > (x + y + 2 * c)) {
		isYes = true;
	}

	if (isYes)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;



	return 0;
}




