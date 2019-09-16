
1140 A - Detective Book.cpp GNU C++17 Accepted
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
 
 const int INF=1e9+5;//billion
 #define MAX 100007
 string alpha="abcdefghijklmnopqrstuvwxyz";
   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 1; i <= n; ++i)
    {
    	/* code */
    	cin>>arr[i];
    }
    
    int dead=INT_MIN;
    int cnt=0;
    for (int i = 1; i <=n; ++i)
                  {
                  	/* code */
                  	dead=max(arr[i],dead);
                  	if(dead==i)
                  		cnt++;

                  }              

	cout<<cnt<<endl;    
    return 0;   
 }

