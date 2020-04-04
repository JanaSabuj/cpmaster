#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	//REEDY ALGORITHM
	int t,p;
	
	int arr[15];
	
	for (int i = 0; i < 12; i++) {
	    /* code */
	    arr[i]= pow(2,i);
	    
	    	   }
	    	   
	    cin>>t;
	    
	while(t--) {
	   
	    cin>>p;
	    int count=0;
	    for (int i = 11; i >= 0; i--) {
	        /* code */
	    if(p>=arr[i]) {
	        count++;
	        p-=arr[i];
	        i++;
	    }
	    
	    
	    }
	    
	  std::cout << count << std::endl;  
	    
	}
	
 	return 0;
}