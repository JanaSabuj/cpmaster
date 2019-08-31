
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

bool comp(string x, string y){
	if(x.length()<= y.length())
		return true;
	else
		return false;
}

 

signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;
 	
 	int t;
 	cin>>t;

 	std::vector<string> vec;
 	for (int i = 0; i < t; ++i)
 	{
 		/* code */
 		string s;
 		cin>>s;
 		vec.push_back(s);
 	}

 	sort(vec.begin(), vec.end(), comp);

 	// for(auto x: vec){
 	// 	cout << x <<endl;
 	// }

	bool isYes = true;
 	for(int i=0; i<t-1; i++){
 		for(int j = i+1 ; j<= (i+1); j++){
 			int ilen = vec[i].length();
 			int jlen = vec[j].length();

 			if(ilen == jlen){
 				if( vec[i]!=vec[j] ){
 					cout << "NO" <<endl;
 					isYes = false;
 					return 0;
 				}
 			}else {
 				if(vec[j].find(vec[i]) == string::npos){
 					cout << "NO" << endl;
 					isYes = false;
 					return 0;
 				}
 			}
 		}
 	}

 	if(isYes){
 		cout << "YES" <<endl;
 		for(auto x: vec)
 			cout << x <<endl;
 	}else {
 		cout <<"NO" <<endl;
 	}

	return 0;
}




