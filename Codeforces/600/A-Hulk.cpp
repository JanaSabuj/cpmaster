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

    int n;
    cin >> n;

    if (n == 1) {
        cout << "I hate it" << endl;
        return 0;
    }

    cout << "I hate ";
    for (int i = 2; i <= n; ++i) {

        cout << "that I ";
        if (i % 2 == 0)
            cout << "love ";
        else
            cout << "hate ";
    }

    cout << "it";

    return 0;
}
