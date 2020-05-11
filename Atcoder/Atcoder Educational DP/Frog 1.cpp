//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India
// God is Great------------/////\\\\\\\--------------------------------
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define INF LLONG_MAX
#define pb push_back
#define mp make_pair
#define F(i,a,b) for (ll i=a;i<=b;i++)

typedef long long ll;
typedef vector<ll> vi;

int main() {
    freopen("input.txt", "r", stdin);
    crap;

    ll n; cin >> n;
    ll arr[n + 7];
    //~ arr[0]=0;
    for (ll i = 1; i <= n; i++) {

        cin >> arr[i];
    }
    arr[0] = arr[1];
    ll dp[n + 7];
    dp[0] = 0; dp[1] = 0;

    for (ll i = 2; i <= n; i++) {

        dp[i] = min( dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]) );

    }

    cout << dp[n] << endl;

    return 0;
}

