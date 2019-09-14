
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

vector<pair<int,int>> vec1;
vector<pair<int,int>> vec2;
void pref_suff_arr(int segX[], int segY[], int n, bool flag){



	int preX[n+2];
	int preY[n+2];// Y - rightmost point

	int sufX[n+2];
	int sufY[n+2];

	preX[0] = LLONG_MIN;
	sufX[n+1] = LLONG_MIN;

	for (int i = 1; i <= n; ++i)
	{
		/* code */ 
		preX[i] = max(preX[i-1], segX[i]);
	}

	for(int i=n; i>=1; i--){
		sufX[i] = max(sufX[i+1], segX[i]);
	}

	preY[0] = LLONG_MAX;
	sufY[n+1] = LLONG_MAX;

	for (int i = 1; i <= n; ++i)
	{
		/* code */ 
		preY[i] = min(preY[i-1], segY[i]);
	}

	for(int i=n; i>=1; i--){
		sufY[i] = min(sufY[i+1], segY[i]);
	}

	int ans = 0;

	for (int i = 1 ; i <= n; ++i)
	{
		/* code */
		int val = min(preY[i-1], sufY[i+1]) - max(preX[i-1], sufX[i+1]);
		
		if(val >=0){
			ans = min(preY[i-1], sufY[i+1]) + max(preX[i-1], sufX[i+1]);
			if(flag)
				vec1.push_back({ans,i});
			else
				vec2.push_back({ans,i});
		}else{
			if(flag)
				vec1.push_back({LLONG_MIN,i});
			else
				vec2.push_back({LLONG_MIN,i});

		}

	}

	 

}

signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;
 	
 	int n;
 	cin>>n;

 	int segX[n+2], segY[n+2], dumX[n+2], dumY[n+2];

 	for (int i = 1; i <= n; ++i)
 	{
 		/* code */
 		int a,b,c,d;
 		cin>>a>>b>>c>>d;

 		segX[i] = a;
 		segY[i] = c;

 		dumX[i] = b;
 		dumY[i] = d;

 	}
 	pref_suff_arr(segX, segY, n, true);
 	pref_suff_arr(dumX,dumY,n, false);


 	// cout << pref_suff_arr(segX, segY, n, true) << " " << pref_suff_arr(dumX,dumY,n, false) <<endl;

 	for (int i = 0; i < vec1.size(); ++i)
 	{
 		/* code */
 		if( vec1[i].second == vec2[i].second and (vec1[i].first != LLONG_MIN and vec2[i].first != LLONG_MIN)){
 			cout << vec1[i].first / 2 << " " << vec2[i].first /2 <<endl;
 			break;
 		}
 	 
 	}

 	

	return 0;
}




