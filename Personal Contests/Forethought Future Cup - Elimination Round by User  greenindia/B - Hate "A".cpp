
1146 B - Hate "A".cpp GNU C++17 Accepted
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
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;
    
	string s;
	cin>>s;
	
	string aao;
	
	int n = s.size();
	string a = "", b = "", h = "";	
	int t = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] != 'a') {
			t++;
		}
	}
 
	t /= 2;
	int tt = 0;
	for(int i = 0; i < n; i++) {
		if( (tt < t && s[i] != 'a') || s[i] == 'a') {
			a += s[i];
			if(s[i] != 'a') {
				tt++;
			}
		}
	}
 
	for(int i = 0; i < a.size(); i++) {
		if(s[i] != 'a') {
			b += s[i];
		}
	}
 
	if(a+b == s) {
		cout<<a<<endl;
	} else {
		cout<<":("<<endl;
	}
	return 0;
}
