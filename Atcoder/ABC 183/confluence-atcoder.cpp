// @greenindia - SABUJ JANA
// janasabuj.github.io
#include <bits/stdc++.h>
using namespace std;
#define crap                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define int long long int
#define double long double
#define PI acos(-1)
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define endl "\n"
const int N = 2e5 + 5;
vi parent(N + 1);
vi sz(N + 1);
map<int, int> mp[N + 1];

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        // a > b
        parent[b] = a;
        sz[a] += sz[b];

        // transfer map of smaller grp to larger grp - as larger will always be the leader
        for (auto pp : mp[b]) {
            mp[a][pp.first] += pp.second;
        }
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
#endif
    crap;

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        make_set(i);
        int v;
        cin >> v;
        mp[i][v]++;  // class v of grp i
    }

    while (q--) {
        int type, a, b;
        cin >> type >> a >> b;

        if (type == 1) {
            union_sets(a, b);
        } else {
            int grp = find_set(a);
            cout << mp[grp][b] << endl;
        }
    }

    return 0;
}