// By greenindia, contest: Codeforces Beta Round #87 (Div. 2 Only), problem: (A) Tram, Accepted, #
 #include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int t,a,b,m,n;
	cin>>t>>a>>b;
	
	int count[t];
	count[0]=a+b;
	
	for (int i = 1; i < t; i++) {
	    /* code */
	    
	    cin>>m>>n;
	    count[i]=count[i-1]-m+n;
	     
	    
	}
	
	int max=count[0];
    for (int i = 0; i < t; i++) {
        /* code */if(count[i]>max)
                        max=count[i];
    }
	
	
	std::cout << max << std::endl;
 
	 
	return 0;
}