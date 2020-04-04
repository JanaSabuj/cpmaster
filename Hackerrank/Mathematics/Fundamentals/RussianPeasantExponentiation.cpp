
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
// #define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
// int power(int a,int b,int m){int ans=1; a = a%m; while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

pair<int,int> mMul(pair<int,int> p, pair<int,int> q, int M){

	int x = (p.first * q.first - p.second * q.second) % M;
	int y = (p.first * q.second + p.second * q.first) % M;
	pair<int,int> ans = {x,y};
	return ans;

}

pair<int,int> compPow(pair<int, int> complex , int k, int M){

	pair<int,int> res = {1,0};
	while(k>0){
		if(k&1){
			res= mMul(res,complex,M);
		}
		complex = mMul(complex,complex,M);
		k/=2;
	}	

	return res;
}

signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;

	int q;
	cin>>q;

	while(q--){
		int a,b,k,m;
		cin>>a>>b>>k>>m;
		pair<int,int> p = {a,b};
		pair<int, int> ans = compPow(p,k,m);

		int x = (ans.first + m)%m;
		int y = (ans.second + m)%m;
		cout<<x<<" "<<y<<endl;
	}
 		
	return 0;
}




