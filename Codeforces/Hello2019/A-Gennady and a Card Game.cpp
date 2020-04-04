 By greenindia, contest: Hello 2019, problem: (A) Gennady and a Card Game, Accepted, #
 //Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>
using namespace std;
// void fileio(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr);}

int main() {
    // fileio();
    ios_base::sync_with_stdio(false);cin.tie(NULL);
//    int t;cin>>t;cout<<t;cerr<<t;
    string x;
    cin>>x;
    int found=0;
    for(int i=0; i<5; i++){
        string y;
        cin>>y;
        if(y[0]==x[0] or y[1]==x[1])
        {
            cout<<"YES"<<endl;
            found=1;
            break;
        }
    }
if(!found)
    cout<<"NO"<<endl;

return 0;
}