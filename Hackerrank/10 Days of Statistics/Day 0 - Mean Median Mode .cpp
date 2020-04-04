#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;

    vector<int> vec(n);
    int total = 0;

    for(int i = 0; i < n; i++){
        cin>>vec[i];
        total += vec[i];
    }

    sort(vec.begin(), vec.end());

    float avg = (float)total / n;
    cout << fixed << showpoint << setprecision(1) <<avg <<endl;

    float median ;
    if(n & 1)
        median = vec[(n)/ 2];
    else {
        median = (float)(vec[(n-1)/2] + vec[(n-1)/2 + 1])/2;
    }

    cout << fixed << showpoint << setprecision(1) << median <<endl;

    int ans = 0;
    int val ;

    map<int,int> mp;
    for(auto x: vec)
        mp[x]++;
    
    for(auto x: mp){
        if(x.second > ans){
            ans = x.second;
            val = x.first;
        }
    }

    cout << fixed << showpoint << setprecision(1) << val <<endl;

    return 0;
}
