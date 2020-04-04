#include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int t,a,b;
	
	cin>>t;
	
	while(t--) {
	    cin>>a>>b;
	    
	    if(a>b)
	        std::cout << a << "\t";
	    else
	        std::cout << b << "\t";
	    
	    std::cout << a+b << std::endl;
	    
	    
	    
	}
	
	 
	return 0;
}