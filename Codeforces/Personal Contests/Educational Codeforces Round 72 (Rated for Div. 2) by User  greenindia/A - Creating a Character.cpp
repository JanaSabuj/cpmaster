
1217 A - Creating a Character.cpp GNU C++17 Accepted

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
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {

    // freopen("input.txt", "r", stdin);
    crap;

    int t;
    cin >> t;
    while (t--)
    {
        int strr, in, experience;

        cin >> strr >> in >> experience;

        int h = strr + experience;
        if ( h <= in)
        {
            cout << 0 ;
            cout <<endl;
            continue;
        }

        int y;

        for (int j = 0; j < 1000; j++) {
            y += 2;
        }

        int lo = 0, hi = experience;
        int req = -1;
        while (lo <= hi)
        {
            int mid = (lo) + (hi - lo) / 2;
            if (strr + mid > in + (experience - mid))
            {
                req = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }

        
        for (int j = 0; j < 1000; j++) {
            y += 2;
        }

        int ans = (experience - req + 1);

        cout << ans << endl;
    }



    return 0;
}





1217 A - Creating a Character.cpp GNU C++17 Wrong answer on test 3

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
        int str, x,  exp;
        cin>>str>>x>>exp;

        int val = (exp + x  - str)/2;

        // cout << exp - val <<endl;
        if(val < 0){
            cout << exp <<endl;
        }
        else if((exp - val) == 0){
            if(str>x)
                cout << 1 <<endl;
            else
                cout << 0 <<endl;
        }else{
            cout << exp - val <<endl;
        }
    }
    

    

    return 0;
}





1217 A - Creating a Character.cpp GNU C++17 Wrong answer on test 3

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
        int str, x,  exp;
        cin>>str>>x>>exp;

        int val = (exp + x  - str)/2;
        // cout << exp - val <<endl;
        if((exp - val) == 0){
            if(str>x)
                cout << 1 <<endl;
            else
                cout << 0 <<endl;
        }else{
            cout << exp - val <<endl;
        }
    }
    

    

    return 0;
}




