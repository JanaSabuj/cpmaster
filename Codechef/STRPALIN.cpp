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

const int INF = 1e9 + 5; //billion
#define MAX 100007
string alpha = "abcdefghijklmnopqrstuvwxyz";
//power (a^b)%m
// int power(int a, int b, int m) {int ans = 1; while (b) {if (b & 1)ans = (ans * a) % m; b /= 2; a = (a * a) % m;} return ans;}

signed main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	crap;

	int t;
	cin >> t;

	while (t--) {
		string a, b;
		cin >> a >> b;

		int f1[26] = {0};
		int f2[26] = {0};

		for (int i = 0; i < a.length(); i++) {
			f1[a[i] - 'a'] = 1;
		}
		for (int i = 0; i < b.length(); i++) {
			f2[b[i] - 'a'] = 1;
		}

		bool found=false;
		for(int i=0; i<26; i++){
			if(f1[i]==f2[i] and f1[i]>0 and f2[i]>0){
				 found=true;
				 break;
			}
		}

		if(found)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;



	}


	return 0;
}

