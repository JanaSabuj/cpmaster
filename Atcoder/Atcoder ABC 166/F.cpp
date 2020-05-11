/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
//
//		  _____       _           _        _
//		 / ____|     | |         (_)      | |
//		| (___   __ _| |__  _   _ _       | | __ _ _ __   __ _
//		 \___ \ / _` | '_ \| | | | |  _   | |/ _` | '_ \ / _` |
//		 ____) | (_| | |_) | |_| | | | |__| | (_| | | | | (_| |
//		|_____/ \__,_|_.__/ \__,_| |  \____/ \__,_|_| |_|\__,_|
//		                        _/ |
//		                       |__/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
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

void print1d(const vector<int>& vec) {
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

void print2d(const vector<vector<int>>& vec) {
    for (auto row : vec) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

vector<string> queries;
bool jobDone;
string ans;
int total;

void dfs(int A, int B, int C, int count, string& temp) {
    if (jobDone)
        return;
    if (A < 0 or B < 0 or C < 0)
        return;
    if (count == total) {
        ans = temp;
        jobDone = true;
        return;
    }

    string x = queries[count];

    if (x == "AB") {
        temp += "A";
        dfs(A + 1, B - 1, C, count + 1, temp);
        temp.pop_back();

        temp += "B";
        dfs(A - 1, B + 1, C, count + 1, temp);
        temp.pop_back();
    } else if (x == "BC") {
        temp += "B";
        dfs(A, B + 1, C - 1, count + 1, temp);
        temp.pop_back();

        temp += "C";
        dfs(A, B - 1, C + 1, count + 1, temp);
        temp.pop_back();
    } else {
        temp += "A";
        dfs(A + 1, B, C - 1, count + 1, temp);
        temp.pop_back();

        temp += "C";
        dfs(A - 1, B, C + 1, count + 1, temp);
        temp.pop_back();
    }

    return;
}

void solve() {
    int q, A, B, C;
    cin >> q >> A >> B >> C;

    int t = q;
    while (t--) {
        string str;
        cin >> str;
        queries.push_back(str);
    }

    total = q;
    // cout << total << endl;
    jobDone = false;
    string temp = "";
    dfs(A, B, C, 0, temp);

    if (jobDone) {
        cout << "Yes" << endl;
        for (auto cc : ans)
            cout << cc << endl;
    } else {
        cout << "No" << endl;
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
#endif
    crap;

    solve();

    return 0;
}