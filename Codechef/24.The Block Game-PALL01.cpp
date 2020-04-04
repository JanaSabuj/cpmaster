#include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t;
	cin>>t;
	int a;
	
	while(t--) {
	    cin>>a;
	    
	    int temp=a;
	    int rev=0;
	    
	    while(temp!=0) {
	        rev=rev*10+ temp%10;
	        temp/=10;
	    }
	    
	    if(rev == a)
	        std::cout << "wins" << std::endl;
	    else
	        std::cout << "losses" << std::endl;
	    
	}
	 
	return 0;
}