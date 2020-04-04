#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	long long int k,num; // long long int not mandatory if the input is less than or equal to 9 digits
	
	cin>>n>>k;
	int count=0;
	
	
	for( int i=0; i<n; i++) {
	    cin>>num;			//input each no and check divisibility
	    if (num%k==0) 
	        count++;
	        
	}
	
	std::cout << count << std::endl;
	
	 
	return 0;
}
