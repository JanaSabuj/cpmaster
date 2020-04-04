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

const int INF = 1e9 + 5; //billion
#define MAX 100007
string alpha = "abcdefghijklmnopqrstuvwxyz";
//power (a^b)%m
int power(int a, int b, int m) {int ans = 1; while (b) {if (b & 1)ans = (ans * a) % m; b /= 2; a = (a * a) % m;} return ans;}

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    crap;

    int r, c;
    cin >> r >> c;

    char grid[r+1][c+1];

    for (int i = 1; i <= r; ++i)
    {
        /* code */
        for (int j = 1; j <= c; j++) {

            cin >> grid[i][j];

        }
    }

    int hor[r+1][c+1];
    memset(hor,0,sizeof(hor));

    for (int i = 1; i <= r; ++i)
    {
        /* code */
        for (int j = 1; j +1<=c; j++) {

            if (grid[i][j] == '.' and grid[i][j + 1] == '.')
                hor[i][j] = 1;
            else
                hor[i][j] = 0;

            hor[i][j] += hor[i - 1][j];
            hor[i][j] += hor[i][j - 1];
            hor[i][j] -= hor[i - 1][j - 1];
        }
    }

    int ver[r+1][c+1];
    memset(ver,0,sizeof(ver));
    for (int i = 1; i+1  <= r; ++i)
    {
        /* code */
        for (int j = 1; j <= c; j++) {

            if (grid[i][j] == '.' and grid[i + 1][j] == '.')
                ver[i][j] = 1;
            else
                ver[i][j] = 0;

            ver[i][j] += ver[i - 1][j];
            ver[i][j] += ver[i][j - 1];
            ver[i][j] -= ver[i - 1][j - 1];
        }
    }




    int q;
    cin >> q;

    while (q--) {
        int i, j, k, l;
        cin >> i >> j >> k >> l;


        if (i == k and j == l) {cout << 0 << endl; continue;}
        int ans = 0;

        //hor
        int r1 = i, c1 = j, r2 = k, c2 = l - 1;

        ans += hor[r2][c2]; 

        ans -= hor[r1 - 1][c2];  
        ans -= hor[r2][c1 - 1];  
        ans += hor[r1 - 1][c1 - 1];  

        //ver
        r2 = k - 1, c2 = l;

        ans += ver[r2][c2]; 
        ans -= ver[r1 - 1][c2];  
        ans -= ver[r2][c1 - 1];  
        ans += ver[r1 - 1][c1 - 1];  


        cout << ans << endl;  
    }




    return 0;
}

