#include <iostream>
#include <iomanip>
using namespace std;

// To execute C++, please define "int main()"
int main() {
    
    int n;
    cin>>n;
    
    int x[n];
    for(int i = 0; i < n; i++){
        cin>>x[i];
    }
    
    int w[n];
    for(int i = 0; i < n; i++){
        cin>>w[i];
    }
    
    int totW = 0;
    int totWX = 0;
    for(int i = 0; i < n; i++){
        totWX += w[i] * x[i];
        totW += w[i];
    }
    
    double ans = (double) totWX / totW ;
    
    cout << fixed << showpoint << setprecision(1) << ans <<endl; 
    
    
    
  return 0;
}


