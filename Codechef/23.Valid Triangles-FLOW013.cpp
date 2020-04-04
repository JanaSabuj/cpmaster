#include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(a && b && c ){
	        if(a+b+c == 180) {
	            std::cout << "YES" << std::endl;
	        }
	        else
	        std::cout << "NO" << std::endl;
	    }
	    
	    else
	     std::cout << "NO" << std::endl;
	    
	    
	    
	}
	
	 
	return 0;
}