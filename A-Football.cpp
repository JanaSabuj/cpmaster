// By greenindia, contest: Codeforces Beta Round #77 (Div. 2 Only), problem: (A) Football, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	string num;
	cin>>num;
	 int count=0;
	for (int i = 0; i < num.length(); i++) {
	    /* code */
	   
	    if(num[i]==num[i+1]){
	        count++;
	        if(count>=6){
	            break;
	        }
	    }
	    
	    else {
	        count=0;
	    }
	    
	    
	    
	}
	
	if(count>=6)
	    std::cout << "YES" << std::endl;
	    else
	    std::cout << "NO" << std::endl;
	 
	
	return 0;
}