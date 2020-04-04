#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int t,n;
	cin>>t;
	int a[6]= {100,50,10,5,2,1};
	
	while(t--) {
	    cin>>n;
	    int count=0;
	    for (int i = 0; i < 6; i++) {
	        /* code */
	         count+=n/a[i];
	         n=n%a[i];
	    }
	    std::cout << count << std::endl;
	    
	}
	 
	return 0;
}