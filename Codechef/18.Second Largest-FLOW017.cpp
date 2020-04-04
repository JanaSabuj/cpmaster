#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t,n;
	
	cin>>t;
	
	while(t--) {
	    int a[3];
	    
	    for (int i = 0; i < 3; i++) {
	        /* code */
	        cin>>a[i];
	    }
	    
	    sort(a,a+3);
	    
	    std::cout << a[1] << std::endl;
	    
	    
	    
	}
	 
	
	return 0;
}