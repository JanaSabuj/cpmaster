By greenindia, contest: Codeforces Round #267 (Div. 2), problem: (A) George and Accommodation, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t;
	cin>>t;
	
	int count=0;
	while(t--){
	    
	    int a,b;
	    cin>>a>>b;
	    
	    
	    if(abs(a-b)>=2)
	        count++;
	   
	    
	}
	
	std::cout << count << std::endl;
	 
	
	return 0;
}