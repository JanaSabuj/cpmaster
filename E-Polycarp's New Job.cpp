//Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>
using namespace std;
void fileio(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr);}

int main() {
    fileio();
    ios_base::sync_with_stdio(false);cin.tie(NULL);
//    int t;cin>>t;cout<<t;cerr<<t;
int n;
cin>>n;
//global
int maximx=0, maximy=0;

//local
    for (int i = 0; i < n; ++i) {
          char ch;cin>>ch;
          int a,b; cin>>a>>b;
//          cerr<<ch<<a<<b;
          //all inputs have been taken

          if(ch=='+'){
               int x= min(a,b);
               int y=max(a,b);
               //just update the maximx and maximy
               maximx=max(maximx,x);
               maximy=max(maximy,y);

          }

          if(ch=='?'){
              int x= min(a,b);
              int y=max(a,b);
               if(x >= maximx and y >= maximy)
                   cout<<"YES"<<endl;
               else
                   cout<<"NO"<<endl;
          }


    }


    return 0;
}
