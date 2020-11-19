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

    int n, k;
    cin >> n >> k;

    int arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            // cout << arr[i][j];
        }

    vi vec;
    for (int i = 2; i <= n; i++)
        vec.push_back(i);

    int cnt = 0;
    do {
        int cost = 0;
        for (int i = 0; i < vec.size(); i++) {
            if (i == 0)
                cost += arr[1][vec[i]];
            else {
                cost += arr[vec[i - 1]][vec[i]];
            }
        }

        cost += arr[vec[n - 2]][1];

        if (cost == k)
            cnt++;
    } while (next_permutation(vec.begin(), vec.end()));

    cout << cnt << endl;
    return 0;
}