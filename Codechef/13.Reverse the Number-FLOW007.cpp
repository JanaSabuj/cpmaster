#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int t,n;
	cin>>t;
	
	while(t--) {
	    cin>>n;
	    
	    int rev=0;
	    
	    while(n>0) {
	        rev= rev*10+ n%10;
	        n/=10;
	    }
	    
	    std::cout << rev << std::endl;
	    
	}
	
	
	
	return 0;
}