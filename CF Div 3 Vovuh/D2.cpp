
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
 	
 	string s,t;
 	cin>>s>>t;

 	int n = s.length();
 	int m = t.length();

 	int pref[m];
 	int suff[m];
    
    int j=0;
 	for (int i = 0; i < n and j < m; ++i)
 	{
 		/* code */
 		if(s[i] == t[j]) pref[j++] = i;

 	}
    
    j = m-1;
    for (int i = n - 1 ; i>=0 and j>=0; --i)
    {
    	/* code */
    	if(s[i] == t[j]) suff[j--] = i;
    }

    int ans = suff[0];
    ans = max(ans, n - pref[m-1] - 1);

    for(int gap = 1; gap < m; gap ++){

    	int l = pref[gap - 1];
    	int r = suff[gap];

    	int size = r - l - 1;
    	ans = max(ans,size);

    }

    // for (int i = 0; i < m; ++i)
    // {
    // 	/* code */
    // 	cout << pref[i] <<" ";
    // }

    // for (int i = 0; i < m; ++i)
    // {
    // 	/* code */
    // 	cout << suff[i] <<" ";
    // }

    cout << ans <<endl;

	return 0;
}




