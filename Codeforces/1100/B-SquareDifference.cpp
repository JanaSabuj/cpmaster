#include <iostream>
using namespace std;
bool isPrime(long long int n){
    if(n<2) return false;
    if(n%2==0) return false;
    for(long long int x=3; x*x<=n; x+=2){
        if(n%x==0) return false;
    }
    return true;
}

  int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;cin>>t;
    while(t--){
            long long int a,b,l,r;
            cin>>a>>b;
            long long int n;
             l=a+b;
             r=a-b;
            if(isPrime(l) and r==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}
// edited by soumalya_ju(god of Java)
