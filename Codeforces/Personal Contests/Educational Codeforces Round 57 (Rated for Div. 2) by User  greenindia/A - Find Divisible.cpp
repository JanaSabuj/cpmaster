
1096 A - Find Divisible.cpp GNU C++17 Accepted
#include <iostream>
using namespace std;

 int main() {
	// your code goes here
	long long int t;
	cin>>t;
	
	while(t--)
	{
	    long long int l,r;
	    cin>>l>>r;
	   // for (long long int i = l+1; i <= r; i++) {
	   //     /* code */
	   //     if(i%l==0)
	   //         {std::cout << l<<" "<<i << std::endl;break;}
	   
	    cout<<l<<" "<<2*l<<endl;
	   
	    
	     
	}
	
	
	return 0;
}

1096 A - Find Divisible.cpp GNU C++17 Time limit exceeded on test 3
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int l,r;
	    cin>>l>>r;
	    for (int i = l+1; i <= r; i++) {
	        /* code */
	        if(i%l==0)
	            {std::cout << l<<" "<<i << std::endl;break;}
	    }
	     
	}
	
	
	return 0;
}
