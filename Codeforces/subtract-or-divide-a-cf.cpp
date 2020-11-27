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

int solve(int n) {
    if (n <= 3)
        return n - 1;
    if (n % 2 == 0)
        return 2;
    return 3;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
#endif
    crap;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }

    return 0;
}