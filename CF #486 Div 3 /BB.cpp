
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

std::vector<int> divs(int n){
	std::vector<int> ans;

	for(int i=1; i*i<=n; i++){
		if(n%i == 0){
			if(n/i == i) ans.push_back(i);
			else{
				ans.push_back(n/i);
				ans.push_back(i);
			}
		}
	}

	return ans;
}

signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	int n;cin>>n;
	string str;
	cin>>str;

	std::vector<int> div = divs(n);
	sort(div.begin(), div.end());
	// reverse(div.begin(), div.end());
	// for(auto x: div)
	// 	cout << x << " ";

	for(auto x : div){
		reverse(str.begin(), str.begin() + x);
	}

	cout << str <<endl;
 	
 	

	return 0;
}




