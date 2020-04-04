By greenindia, contest: Codeforces Beta Round #40 (Div. 2), problem: (A) Translation, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	
	string s,t;
	cin>>s>>t;
	
	string copy;
	
	copy=s;
	
	reverse(copy.begin(), copy.end());
	
	  
	 
	
	if(copy==t)
	    std::cout << "YES" << std::endl;
	else
	    std::cout << "NO" << std::endl;
	
  
	
	
	return 0;
}