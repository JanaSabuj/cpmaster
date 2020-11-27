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

class node {
   public:
    int val;
    int level;
};

void build(int v, int tl, int tr, node st[], int arr[]) {
    if (tl == tr) {
        st[v].val = arr[tl];
        st[v].level = 0;
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm, st, arr);
        build(v * 2 + 1, tm + 1, tr, st, arr);

        st[v].level = st[v * 2].level + 1;
        if (st[v].level & 1)
            st[v].val = st[v * 2].val | st[v * 2 + 1].val;
        else
            st[v].val = st[v * 2].val ^ st[v * 2 + 1].val;
    }
}

void update(int v, int tl, int tr, int pos, int x, node st[], int arr[]) {
    // 3 cases
    if (pos < tl or pos > tr)
        return;
    else if (tl == pos and pos == tr) {
        st[v].val = x;
    } else {
        int tm = (tl + tr) / 2;
        update(v * 2, tl, tm, pos, x, st, arr);
        update(v * 2 + 1, tm + 1, tr, pos, x, st, arr);

        if (st[v].level & 1)
            st[v].val = st[v * 2].val | st[v * 2 + 1].val;
        else
            st[v].val = st[v * 2].val ^ st[v * 2 + 1].val;
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
    n = (1 << n);

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    // build
    node st[4 * n];
    build(1, 1, n, st, arr);

    while (q--) {
        int p, b;
        cin >> p >> b;
        // updt
        update(1, 1, n, p, b, st, arr);

        // ans
        cout << st[1].val << endl;
    }

    return 0;
}