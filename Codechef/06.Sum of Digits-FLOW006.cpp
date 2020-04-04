#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int t,n,dig,sum;
	cin>>t;
	
	while(t--) {
	    
	    cin>>n;
	    sum=0;
	    while(n>0) {
	        dig=n%10;
	        sum+=dig;
	        n/=10;
	        
	    }
	    
	    std::cout << sum << std::endl;
	    
	}
	 
	
	return 0;
}