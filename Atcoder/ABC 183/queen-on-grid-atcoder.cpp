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

const int mod = 1e9 + 7;

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
#endif
    crap;

    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int dp[n][m], left[n][m], top[n][m], diag[n][m];
    dp[0][0] = 1;
    left[0][0] = 1, top[0][0] = 1, diag[0][0] = 1;

    // 1st row
    for (int j = 1; j < m; j++) {
        if (arr[0][j] != '#') {
            dp[0][j] = left[0][j - 1] % mod;
            left[0][j] = (dp[0][j] + left[0][j - 1] % mod) % mod;
            top[0][j] = dp[0][j];
            diag[0][j] = dp[0][j];
        } else {
            dp[0][j] = 0;
            left[0][j] = 0, top[0][j] = 0, diag[0][j] = 0;
        }
    }

    // 1st column
    for (int i = 1; i < n; i++) {
        if (arr[i][0] != '#') {
            dp[i][0] = top[i - 1][0] % mod;
            top[i][0] = (dp[i][0] + top[i - 1][0] % mod) % mod;
            left[i][0] = dp[i][0];
            diag[i][0] = dp[i][0];
        } else {
            dp[i][0] = 0;
            left[i][0] = 0, top[i][0] = 0, diag[i][0] = 0;
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j] != '#') {
                dp[i][j] = (top[i - 1][j] % mod + left[i][j - 1] % mod + diag[i - 1][j - 1] % mod) % mod;
                left[i][j] = (dp[i][j] + left[i][j - 1] % mod) % mod;
                top[i][j] = (dp[i][j] + top[i - 1][j] % mod) % mod;
                diag[i][j] = (dp[i][j] + diag[i - 1][j - 1] % mod) % mod;
            } else {
                dp[i][j] = 0;
                left[i][j] = 0, top[i][j] = 0, diag[i][j] = 0;
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << left[i][j] << "," << top[i][j] << "," << diag[i][j] << "   ";
    //     }
    //     cout << endl;
    // }

    cout << dp[n - 1][m - 1] << endl;

    return 0;
}