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

    int n, w;
    cin >> n >> w;

    vector<pair<int, int>> events;

    int q = n;
    while (q--) {
        int s, t, p;
        cin >> s >> t >> p;

        events.push_back({s, p});
        events.push_back({t, -p});
    }

    sort(events.begin(), events.end());
    int curr = 0;
    for (auto p : events) {
        // start from left to right cumulatively and care abt a single point
        curr += p.second;
        if (curr > w) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
