
1178 A - Prime Minister.cpp GNU C++17 Accepted

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
    
// 	freopen("input.txt", "r", stdin);
	crap;
 	
 	int n;
 	cin>>n;

    int arr[n];
 	for (int i = 0; i < n; ++i)
 	{
 		/* code */
 		cin>>arr[i];

 	}

 	bool used[n];
 	// memset(inc,0,sizeof(inc))
 	memset(used,false,sizeof(used));

 	int val=arr[0];
 	int coal=val;
 	int opp=0;
 	int count=0;
 	std::vector<int> vec;
 	vec.push_back(1);
 	int total=val;
 	for (int i = 1; i < n; ++i)
 	{
 		/* code */
 		total+=arr[i];
 		if(val>= (2 * arr[i])){
 			count++;
 			coal+=arr[i];
 			vec.push_back(i+1);
 		}
 		else
 			opp+=arr[i];
 	}

 	if(coal > (total/2)){
 		cout<<vec.size()<<endl;
 		for(auto x:vec)
 			cout<<x<<" ";


 	}else{
 		cout<<0<<endl;
 	}

	return 0;
}




