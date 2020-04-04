#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;cin>>t;
    while(t--){
        int l,r,d;
        cin>>l>>r>>d;
        if(d<l or d>r){
            cout<<d<<endl;
        }
        else {
            cout<< (r/d + 1) * d <<endl;
        }
    }
    return 0;
}
