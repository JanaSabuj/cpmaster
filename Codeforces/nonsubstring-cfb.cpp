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

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
#endif
    crap;

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        string str;
        cin >> str;

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--, r--;

            bool flag = false;
            for (int i = l - 1; i >= 0; i--) {
                if (str[i] == str[l]) {
                    flag = true;
                    break;
                }
            }

            if (!flag) {
                for (int i = r + 1; i < n; i++) {
                    if (str[i] == str[r]) {
                        flag = true;
                        break;
                    }
                }
            }

            cout << (flag ? "YES" : "NO") << endl;
        }
    }

    return 0;
}