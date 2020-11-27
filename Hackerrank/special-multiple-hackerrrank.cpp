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

vector<string> bins;

void pre() {
    queue<string> q;
    q.push("9");
    int k = 1e3;

    while (k--) {
        string val = q.front();
        string val2 = val;
        q.pop();

        bins.push_back(val);

        q.push(val.append("0"));
        q.push(val2.append("9"));
    }
}

void solve(int n) {
    for (auto x : bins) {
        if ((1 * stoll(x)) % n == 0) {
            cout << x << endl;
            return;
        }
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
#endif
    crap;

    pre();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        // cout << n << endl;
        solve(n);
    }

    return 0;
}