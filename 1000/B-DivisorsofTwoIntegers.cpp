 //Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>

using namespace std;

 

int main() {
     
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin() , v1.end());
    if(n==2 and v1[0]==1 and v1[1]==1) {cout<<1<<" "<<1<<endl; return 0;}

    int a = v1[n - 1];
    cout << a <<" ";



    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            auto it1 = std::find(v1.begin(), v1.end(), i);

            if (it1 != v1.end()) {
                std::iter_swap(it1, v1.end() - 1);
                v1.erase(v1.end() - 1);

            }
        if(a/i!=i)  {
            auto it2 = std::find(v1.begin(), v1.end(), a/i);
            if(it2!=v1.end()){
                std::iter_swap(it2, v1.end() - 1);
                v1.erase(v1.end() - 1);
                }
            }
        }
    }

    sort(v1.begin(),v1.end());
    int sz = v1.size();
    
    cout<<v1[sz-1];

    return 0;
}
