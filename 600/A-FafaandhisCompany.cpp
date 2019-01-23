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

    int count = 0;
    for (int i = 1; i <= n / 2; i++) {
        if ((n - i) % i == 0)
            count++;
    }

    cout << count << endl;
    return 0;
}
