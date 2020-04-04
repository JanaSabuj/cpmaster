#include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int t,n,rem,quotient,count;
	
	cin>>t;
	
	while(t--) {
	    
	    cin>>n;
	    count=0;
	    while(n>0) {
	        rem= n%10;
	        quotient=n/10;
	        if (rem==4) count++;
	        n=quotient;
	    }
	    
	    std::cout << count << std::endl;
	}
	 
	return 0;
}

/**VERSION OF STRING

#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	string num;
	int t;
	
	cin>>t;
	
	while(t--) {
	    cin>>num;
	    int count=0;
	    for (int i = 0; i < num.length(); i++) {
	        
	        if(num[i]=='4') count++; // DOO NOOOOOOOT FORGET TO PUT 4 IN QUOTES  
	    }
	    std::cout << count << std::endl;
	}
	
	 
	return 0;
}
**/