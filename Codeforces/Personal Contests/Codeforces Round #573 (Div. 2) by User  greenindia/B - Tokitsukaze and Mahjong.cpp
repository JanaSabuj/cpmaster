
1191 B - Tokitsukaze and Mahjong.cpp GNU C++17 Accepted

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
// #define int long long int
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
	string s[3];
	crap;
 	
 	 
    cin>>s[0]>>s[1]>>s[2];
    swap(s[0][0],s[0][1]);
    swap(s[1][0],s[1][1]);
    swap(s[2][0],s[2][1]);
    sort(s,s+3);
    swap(s[0][0],s[0][1]);
    swap(s[1][0],s[1][1]);

    swap(s[2][0],s[2][1]);


    int IDENTICAL = 0,MAXIDENTICAL = 0,folo = 0,MAXFOLOING = 0,special = 3;



    for(int i = 1;i<3;i++){
        if(s[i] == s[i-1]){
            IDENTICAL++;
            MAXIDENTICAL = max(MAXIDENTICAL,IDENTICAL);
        }else {
            IDENTICAL = 0;
        }
        if(s[i][1] == s[i-1][1] and char(int(s[i-1][0]) + 1) == s[i][0]){
            folo++;
            MAXFOLOING = max(MAXFOLOING,folo);
        }else{
            folo = 0;
        }
        if(s[i][1] == s[i-1][1] && char(int(s[i-1][0]) + 2) == s[i][0]){
            special = 1;
        }
    }
    MAXIDENTICAL = 2 - MAXIDENTICAL;


    MAXFOLOING = 2 - MAXFOLOING;


    int ans = min(MAXIDENTICAL,MAXFOLOING);
    
    
    
    ans = min(ans,special);


    cout<<ans;
    cout<<endl;
    return 0;
 	 
}




