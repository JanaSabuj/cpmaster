#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	     bool res= true;
	    
	    if(n<=1)
	        res= false;
	   if(n==2)
	    res=true;
	    	    
	    for (int i = 3; i <= sqrt(n); i++) {
	        /* code */
	        if(n%i==0)
	            res=false;
	        break;

	    }
	        
	    
	    
	    
	    std::cout << (res?"yes":"no") << std::endl;
	    
	    
	    
	}
	
	 
	
	return 0;
}