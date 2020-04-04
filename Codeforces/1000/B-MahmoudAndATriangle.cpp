#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<=n-3;i++){
        if(arr[i]+arr[i+1]>arr[i+2])
        {cout<<"YES"<<endl;return 0;}
    }

    cout<<"NO"<<endl;
    return 0;

}
