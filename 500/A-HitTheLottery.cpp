//Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>

using namespace std;

// void fileio() {
//     freopen("input.txt" , "r" , stdin);
//     freopen("output.txt" , "w" , stdout);
//     freopen("error.txt" , "w" , stderr);
// }

int main() {
    // fileio();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //    int t;cin>>t;cout<<t;cerr<<t;

    int num;
    cin >> num;


    int count = 0;

    if (num >= 100) {
        count += num / 100;
        num = num % 100;

    }
    if (num >= 20) {
        count += num / 20;
        num = num % 20;

    }
    if (num >= 10) {
        count += num / 10;
        num = num % 10;

    }
     
    if (num >= 5) {
        count += num / 5;
        num = num % 5;

    }
    if (num >= 1) {
        count += num / 1;
        num = num % 1;

    }

    cout << count << endl;


    return 0;
}

