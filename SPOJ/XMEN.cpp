#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int lis(vi& arr){

    vi seq;
    int n = arr.size();
    if(n == 0)
        return 0;
    seq.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        if(seq.back() < arr[i])
            seq.push_back(arr[i]);
        else{
            int ind = lower_bound(seq.begin(), seq.end(), arr[i]) - seq.begin();
            seq[ind] = arr[i];
        }
    }

    return seq.size();
}

void solve(){
    int n;
    cin >> n;

    vi A(n), B(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    for(int i = 0; i < n; i++)
        cin >> B[i];
    
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++)
        mp[B[i]] = i + 1;

    vector<int> C;
    for(int i = 0; i < n; i++){
        if(mp.find(A[i]) != mp.end()){
            C.push_back(mp[A[i]]);
        }
    }

    cout << lis(C) << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
