//Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>

using namespace std;

void fileio() {
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    freopen("error.txt" , "w" , stderr);
}

int main() {
    fileio();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;

    int n;
    cin >> n;
    string str;
    cin >> str;
    int seatosf = 0 , sftosea = 0;

    for (int i = 0; i < n - 1; i++) {
        if (str[i] == 'S' and str[i + 1] == 'F') {
            seatosf++;
        } else if (str[i] == 'F' and str[i + 1] == 'S') {
            sftosea++;
        }
    }
    if (seatosf > sftosea)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
