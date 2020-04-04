#include <bits/stdc++.h>
using namespace std;

bool prime[2005];
vector<int> vec;

void sieve(int n){

memset(prime,true,sizeof(prime));//all are prime
for(int x=2; x*x<=n; x++){

        if(prime[x]){
            for(int i=x*x; i<=n; i+=x){
                 prime[i]=false;
            }
        }
}

for(int i=2; i<=n; i++){
    if(prime[i])
    {vec.push_back(i);}
}
//  cout<<vec[0];
}
 
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int k;cin>>k;
    if(n==2 and k==0) {cout<<"NO"; return 0;}
    sieve(n);
    // cout<<vec[2];
    int sz=vec.size();
    // cout<<vec[0];
    int count=0;
    for(int i=0;i<sz-1; i++){
             int x=vec[i]+vec[i+1]+1;  
            //  if(isprim(x)) count++;
                auto it= find(vec.begin(),vec.end(),x);
                if(it!=vec.end()) count++;
             if(count>=k) {  cout<<"YES"; return 0;}
    }

    cout<<"NO";
    return 0;
}
