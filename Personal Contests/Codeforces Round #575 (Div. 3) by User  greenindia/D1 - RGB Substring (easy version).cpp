
1196 D1 - RGB Substring (easy version).cpp GNU C++17 Accepted

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ANSWER<<endl;
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
//int power(int a,int b,int m){int ANSWER=1;while(b){if(b&1)ANSWER=(ANSWER*a)%m;b/=2;a=(a*a)%m;}return ANSWER;}
//int power(int a, int b){int ANSWER=1;while(b){if(b&1)ANSWER=ANSWER*a;b/=2;a=a*a;}return ANSWER;}
void check(char t[]) {

        for (int i = 0; i < 5000; i++) {
                if (i % 3 == 0)
                        t[i] = 'R';
                else if (i % 3 == 1)
                        t[i] = 'G';
                else
                        t[i] = 'B';
        }

}


signed main() {

        // freopen("input.txt", "r", stdin);
        crap;

        int q;
        cin >> q;
        char t[5000];

        check(t);
        //checked and updt

        while (q--) {

                int n, k;
                cin >> n >> k;
                string str;
                cin >> str;

                int ANSWER = 2000;
                int VAR = 0;

                for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < n - k + 1; j++) {
                                VAR = 0;
                                for (int r = j; r < j + k; r++) {
                                        if (str[r] != t[i + r - j])
                                                VAR++;
                                }

//update
                                ANSWER = min(ANSWER, VAR);

                        }
                }
                //print
                cout << ANSWER << endl;
        }

        return 0;
}




