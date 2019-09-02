// By greenindia, contest: Codeforces Round #143 (Div. 2), problem: (A) Team, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int t;
	int arr[3];
	cin>>t;
	
	int todo=0;
	while(t--) {
	   // cin>>arr[i];
	    int count=0;
	    
	    for (int i = 0; i < 3; i++) {
	        /* code */
	        cin>>arr[i];
	        if(arr[i]==1)
	            count++;
	        
	    }
	    
	    if(count>=2)
	        todo++;
	        
	}
	
	std::cout << todo << std::endl;
	 
	
	return 0;
}