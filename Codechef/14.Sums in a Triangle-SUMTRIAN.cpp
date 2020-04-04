#include <bits/stdc++.h>
using namespace std;

int main() {
//cout<<"GfG!";

int t,n;

cin>>t;
while(t--) {
    cin>>n;
    
     int a[n][n];
    
    for (int k = 0; k < n;k++) {
        /* code */
        for (int l = 0; l <= k; l++) {
            /* code */
            cin>>a[k][l];
        }
    }
    
    for (int i = n-2; i >=0; i--) {
        /* code */
        for (int j = 0; j<=i; j++) {
            /* code */
            if(a[i+1][j]>a[i+1][j+1])
               { a[i][j]+=a[i+1][j];}
            else
                 {a[i][j]+=a[i+1][j+1];}
        }
    }
    
    
    std::cout << a[0][0] << std::endl;
    
    
    
    
}
	return 0;
}