#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;cin>>n;
    int k;cin>>k;
    vector<int> vec;
    for(int x=2;x*x<=n;x++ ){
        while(n%x==0){
            vec.push_back(x);
            n/=x;
        }
    }
    if(n>1) vec.push_back(n);

    int sz=vec.size();
    if(sz<k) cout<<-1<<endl;
else
 {
     for(int i=0; i<=k-2; i++){
         cout<<vec[i]<<" ";
     }
     int f=1;
     for(int i=k-1;i<sz;i++){
         f*=vec[i];
     }
     cout<<f<<endl;
 }

    return 0;
}
