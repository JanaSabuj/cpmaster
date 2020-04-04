
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

	int q;
	cin >> q;

	while (q--) {
		string str;
		cin >> str;

		int n = str.length();
		stack<int> s;
		bool isValid = true;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			// char str[i] = str[i];
			if (str[i] == '{' or str[i] == '[' or str[i] == '(')
				s.push(str[i]);
			else {
				if (str[i] == ')') {

					if(s.empty()){
						isValid = false;
						// break;
						goto label;
					}

					char topp = s.top();
					 s.pop();
					if (topp != '(') {
						isValid = false;
						break;
						// goto label;
					}
				}
				if (str[i] == '}') {

					if(s.empty()){
						isValid = false;
						// break;
						goto label;
					}
					char topp = s.top();
					s.pop();
					if (topp != '{') {
						isValid = false;
						break;
					}
				}
				if (str[i] == ']') {

					if(s.empty()){
						isValid = false;
						// break;
						goto label;
					}
					char topp = s.top();
					s.pop();
					if (topp != '[') {
						isValid = false;
						break;
					}
				}

			}

		}


label:
		if (isValid and s.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}



	return 0;
}




