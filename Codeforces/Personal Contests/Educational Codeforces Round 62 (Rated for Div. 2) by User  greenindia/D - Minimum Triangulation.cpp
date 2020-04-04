
1140 D - Minimum Triangulation.cpp GNU C++17 Accepted
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
     
     int sum=0;
    for(int i=1; i<=n-2; i++){
    	sum+=(i+1)*(i+2);

    }

    cout<<sum<<endl;
                  
     
    return 0;   
 }

