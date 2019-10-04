
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
const int sz = 1000007;
int BIT[sz], arr[sz],n;

void update(int index, int val){
	 for(; index<=n; index += index&(-index)){
	 	BIT[index] += val;
	 }

}

int query(int index){
	int ans=0;
	for(; index>0; index -= index&(-index))
		ans += BIT[index];

	return ans;
}



signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	cin>>n;
	memset(BIT,0,sizeof(BIT));
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		cin>>arr[i];
		update(i, arr[i]);
	}


	int q;
	cin>>q;

	while(q--){
		char c;
		cin>>c;

		if(c == 'u'){
			int i,val;
			cin>>i>>val;
			update(i,val);// add val to this index
		}else{
			int l,r;
			cin>>l>>r;
			cout << query(r) - query(l-1) <<endl;
		}
	}	


 	
 	

	return 0;
}




