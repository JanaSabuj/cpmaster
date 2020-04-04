
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
    
	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin>>n;

	std::vector<int> x;
	std::vector<int> y;
	while(n--){

		int a,b;
		cin>>a>>b;

		if(a == 0)
			y.push_back(b);
		else if(b == 0)
			x.push_back(a);

	}

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	double dist1 = x[x.size()-1] - x[0];
	double dist2 = y[y.size()-1] - y[0];

	int maxX,maxY;
	maxX = max(abs(x[x.size()-1]), abs(x[0]));
	maxY = max(abs(y[y.size()-1]), abs(y[0]));

	double dist3 = sqrt( maxX*maxX + maxY * maxY);

	cout<< fixed<<showpoint<<setprecision(12)<< max(dist1,max(dist2,dist3)) <<endl;

	return 0;
}

