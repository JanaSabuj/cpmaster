  //Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>

using namespace std;

 

int main() {
     
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;
    int n;
    cin >> n;
    multiset<int> v1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1.insert(x);
    }
     
    if(n==2) {cout<<1<<" "<<1<<endl; return 0;}

    int a = *prev(v1.end());
    cout << a <<" ";



    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
                auto it1=v1.find(i);
                auto it2=v1.find(a/i);
                v1.erase(it1);
                if(a/i!=i)
                    v1.erase(it2);
        }
    }

     
     
    
    cout<<*prev(v1.end());

    return 0;
}
