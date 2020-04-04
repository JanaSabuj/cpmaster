#include <iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
     
}
 
int main() {
	//cout<<"GfG!";
	int t,n;
	cin>>t;
	
	while(t--) {
	    cin>>n;
	    int ans= fact(n);
	    std::cout << ans << std::endl;
	}
	
	 
	return 0;
}