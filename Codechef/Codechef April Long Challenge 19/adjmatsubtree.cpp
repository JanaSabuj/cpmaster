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

 

int X;
int ans(int s, int e, vector<int> adj[], int val[]) {
    int sum = 0;

    for (auto u : adj[s]) {
        if (u != e) {
            sum += ans(u, s,adj,val);
        }
    }

    return max(-X, val[s] + sum);


}

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    crap;

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n >> X;
        vector<int> adj[n+1];
        int val[n+1];
        


        for (int i = 1; i <= n; i++) {
            cin >> val[i];
        }


        int edge = n - 1;



        while (edge--) {
            int x, y;
            cin >> x >> y;

            adj[x].pb(y);
            adj[y].pb(x);
        }


        cout << ans(1, 0,adj,val) << endl;



    }


    return 0;
}

