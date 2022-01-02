/*
Sabuj Jana / @greenindia
https://www.janasabuj.github.io
*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define double long double
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define endl "\n"
void print1d(const vector<int>& vec) { for (auto val : vec) { cout << val << " "; } cout << endl; }
void print2d(const vector<vector<int>>& vec) { for (auto row : vec) { for (auto val : row) { cout << val << " "; } cout << endl; } }
const int mod = 1e9 + 7;
const int N = 1e5 + 7;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int l = 0;
    char prev = '{';
    for(int i = 0; i < n; i++) {
        if(str[i] < prev)
            l++;
        else if(str[i] == prev and str[i] != str[0])
            l++;
        else
            break;
        
        prev = str[i];
    }

    string s1 = str.substr(0,l);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    cout << (s1 + s2) << endl;
}

#define SABUJ_JANA_WxF 1
signed main() {
    crap;
#ifdef SABUJ_JANA_WF
    auto start = chrono::high_resolution_clock::now();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("error.txt", "w", stderr);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();

#ifdef SABUJ_JANA_WF
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cerr << "Time taken :\n" << duration.count() / 1000000.0 << "s" << "\n";
#endif
    return 0;
}