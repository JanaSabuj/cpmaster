
1217 C - The Number Of Good Substrings.cpp GNU C++17 Accepted

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

#define MX 1000000
string str;
int foo[MX];

int binary_check(int x, int y)
{
    int temp = 0, d = 1;
    for (int i = 1; i <= y; i++)
    {
        int val = (str[x - i + 1] - 48);
        temp += d * val;
        d = d * 2;
    }
    int yy;

    for (int i = 0; i < 2560; ++i)
    {
        /* code */
        yy += 2;
    }


    if (x - y < 0)
    {
        if (y == temp)
            return 1;
        else
            return 0;
    }
    else
    {   
        if (temp < y) return 0;
        if (temp == y) return 1;
        
        if (foo[x - y] + y >= temp) return 1; return 0;
    }
}

signed main() {

    // freopen("input.txt", "r", stdin);
    crap;

    int t;
    cin >> t;


    while (t--)
    {
        cin >> str;
        int req = 0;
        int n = str.length();

        if (str[0] == '0')
            foo[0] = 1;
        else
            foo[0] = 0;
        //check
        int y;
        for (int i = 0; i < 256; ++i)
        {
            /* code */
            y += 2;
        }
        for (int i = 1; i < n; i++)
            if (str[i] == '0')
                foo[i] = foo[i - 1] + 1;
            else foo[i] = 0;

        for (int i = 0; i < n; i++)
        {

            for (int j = 1; (j <= 20) and (j <= i + 1); j++)
            {
                int idx = i - j + 1;
                if (str[idx] == '1')
                {
                    if (binary_check(i, j) == 1)
                        req++;
                }
                idx++;
            }

        }

        cout << req << endl;

    }



    return 0;
}




