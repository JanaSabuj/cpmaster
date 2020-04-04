
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

	int t;
	cin>>t;

	while(t--){
		int n,k;
		cin>>n>>k;

		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			arr[i] = i;
		}

		int i=0,j=n-1;
		int turn=1;
		int index=0;
		int ans[n];

		while(i<=j){
			if(turn&1){
				ans[index]=arr[j];
				index++;
				j--;
				turn++;
			}
			else {
				ans[index]=arr[i];
				index++;
				i++;
				turn++;
			}

		}

		// for (int i = 0; i < n; ++i)
		// {
			  
		// 	cout<<ans[i]<<" ";
		// }
		// cout<<endl;

		auto it = find(ans,ans+n,k);
		cout<< it - ans  <<endl;


	}
 	
 	

	return 0;
}




	