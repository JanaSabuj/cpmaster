
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
    
	// freopen("input.txt", "r", stdin);
	crap;
 	
 	int t;
 	cin>>t;

 	while(t--){
 		int n;
 		cin>>n;

 		int arr[n];
 		for (int i = 0; i < n; ++i)
 		{
 			/* code */
 			cin>>arr[i];
 		}

 		int maxSumL[n],minSumL[n],dpm[n],dpM[n];
 		maxSumL[0] = arr[0];
 		minSumL[0] = arr[0];
 		dpM[0] = arr[0];
 		dpm[0] = arr[0];
 		for (int i = 1; i < n; ++i)
 		{
 			/* code */
 			maxSumL[i] = max(maxSumL[i-1] + arr[i], arr[i]);
 			minSumL[i] = min(minSumL[i-1] + arr[i], arr[i]);
 			dpM[i] = max(maxSumL[i], dpM[i-1]);
 			dpm[i] = min(minSumL[i], dpm[i-1]);

 		}


 		int maxSumR[n],minSumR[n],dpmR[n],dpMR[n];
 		maxSumR[n-1] = arr[n-1];
 		minSumR[n-1] = arr[n-1];
 		dpMR[n-1] = arr[n-1];
 		dpmR[n-1] = arr[n-1];
 		for (int i = n - 2; i >= 0; --i)
 		{
 			/* code */
 			maxSumR[i] = max(maxSumR[i+1] + arr[i], arr[i]);
 			minSumR[i] = min(minSumR[i+1] + arr[i], arr[i]);
 			dpMR[i] = max(maxSumR[i], dpMR[i+1]);
 			dpmR[i] = min(minSumR[i], dpmR[i+1]);

 		}


 		int req = 0;
 		for (int i = 0; i < n-1; ++i)
 		{
 			/* code */
 			int x1 = abs(dpM[i] - dpmR[i+1]);
 			int x2 = abs(dpm[i] - dpMR[i+1]);

 			req = max(req, max(x1,x2));
 		}

 		cout << req <<endl;






 	}

	return 0;
}




