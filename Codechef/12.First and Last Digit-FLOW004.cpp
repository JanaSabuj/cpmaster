#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t,n;
	
	cin>>t;
	
	while(t--) {
	    
	    cin>>n;
	    
	    int last=n%10;
	     int first;
	    while(n>=10) {
	        n/=10;
	         first= n;
	        	    }
	        	    
	        	    std::cout << last+first << std::endl;
	    
	}
	
	return 0;
}

/*Another method of first digit extraction
 int first;
	     
	     int digit=  (int)log10(n);
	     first= (int) (n/pow(10,digit));