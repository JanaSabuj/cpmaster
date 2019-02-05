#include <iostream>
using namespace std;
using ll=long long;
int main() {
    // cout<<"Hello World!";

    int n;cin>>n;
    ll arr[100006];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int size=1,ans=1;
    for(int i=1; i<n; i++){
            if(arr[i]>=arr[i-1]){
                size++;
                ans=max(ans,size);
            }
            else {
                size=1;
                continue;
            }
    }

    cout<<ans<<endl;

    return 0;
}
