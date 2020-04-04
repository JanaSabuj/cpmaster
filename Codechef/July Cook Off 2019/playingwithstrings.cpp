
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
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {
    
	 
	crap;
 	
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		string S,R;
 		cin>>S;
 		cin>>R;
 		int c0=0,c1=0;
 		int d0=0,d1=0;
 		for (int i = 0; i < S.length(); ++i)
 		{
 			/* code */
 			if(S[i] == '0')
 				c0++;
 			else if(S[i] == '1')
 				c1++;

 			if(R[i] == '0')
 				d0++;
 			else if(R[i] == '1')
 				d1++;
 		}

 		if(c0 == d0 and c1 == d1)
 			cout<<"YES"<<endl;
 		else
 			cout<<"NO"<<endl;

 	}

	return 0;
}




