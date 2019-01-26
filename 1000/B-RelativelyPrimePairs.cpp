#include <iostream>
using namespace std;
using ll=long long ;
int main() {
    // cout<<"Hello World!";
    ll l ,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l; i<r; i+=2){
        cout<<i<<" "<<i+1<<endl;
    }
    
}
