/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
//
//          _____       _           _        _
//         / ____|     | |         (_)      | |
//        | (___   __ _| |__  _   _ _       | | __ _ _ __   __ _
//         \___ \ / _` | '_ \| | | | |  _   | |/ _` | '_ \ / _` |
//         ____) | (_| | |_) | |_| | | | |__| | (_| | | | | (_| |
//        |_____/ \__,_|_.__/ \__,_| |  \____/ \__,_|_| |_|\__,_|
//                                _/ |
//                               |__/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define int long long int
#define double long double
#define PI acos(-1)
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define endl "\n"

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

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

        string num;
        cin >> num;

        bool even = false;
        bool odd = false;

        for (int i = 0; i < n; i++) {
            int idx = i + 1;
            if (idx % 2 == 0 and (num[i] - '0') % 2 == 0)
                even = true;
            else if (idx % 2 != 0 and (num[i] - '0') % 2 != 0)
                odd = true;
        }

        if (n % 2 == 0) {
            if (even)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        } else {
            if (odd)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }



    }

    return 0;
}