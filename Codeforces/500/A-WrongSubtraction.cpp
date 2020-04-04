//Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>
using namespace std;
// void fileio(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr);}

int main() {
    // fileio();
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;

int x;int n;
cin>>x>>n;

while (n--){

    if(x%10==0)
        x/=10;
    else
        x-=1;

}
    cout<<x<<endl;

    return 0;
}