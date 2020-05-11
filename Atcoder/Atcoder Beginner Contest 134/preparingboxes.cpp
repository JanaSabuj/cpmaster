
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

	int a[n+1];
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		cin>>a[i];
	}

	int box[n+1];
	std::vector<int> ans;

	for (int i = n; i > n/2; i--)
	{
		/* code */
		box[i] = a[i];
		if(box[i] == 1)
			ans.push_back(i);

	}

	for (int i = n/2 ; i >= 1; i--)
	{
		/* code */
		int curr = i;
		int sum=0;
		//check multiples of curr index
		for(int j=i + i ; j<=n;  j+=i){
			sum+=box[j];
		}

		if(sum%2 == a[i])
			box[i]=0;
		else
			box[i]=1;

		if(box[i] == 1)
			ans.push_back(i);

	}

	cout<< ans.size() <<endl;
	for(auto x: ans)
		cout<< x <<" ";
 
 	
 	

	return 0;
}




