
1196 C - Robot Breakout.cpp GNU C++17 Accepted

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

    while (t--) {

        int n;
        cin >> n;

        int xmin, XMAX, ymin, YMAXIMUM;
        xmin = ymin = -100000;
        XMAX = YMAXIMUM = 100000;


        bool isPOSSIBLE = false;
        for (int i = 0; i < n; i++) {
            int x, y, u, d, r, l;
            //ranges
            int lx, rx, YU, YD;
            cin >> x >> y >> l >> u >> r >> d;

            //check
            l ? lx = -100000 : lx = x;
            r ? rx = 100000 : rx = x;
            u ? YU = 100000 : YU = y;
            d ? YD = -100000 : YD = y;
            //condition
            if (rx < xmin || lx > XMAX || YU < ymin || YD > YMAXIMUM)
                isPOSSIBLE = true;

            //algo
            xmin = max(xmin, lx);
            ymin = max(ymin, YD);
            XMAX = min(XMAX, rx);
            YMAXIMUM = min(YMAXIMUM, YU);
        }


        if (isPOSSIBLE)
            cout << 0 << endl;
        else
            cout << 1 << " " << XMAX << " " << YMAXIMUM << endl;

    }


    //end

    return 0;
}




