// By greenindia, contest: Codeforces Beta Round #96 (Div. 2), problem: (A) HQ9+, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	string s;
	cin>>s;
	
	int present=0;
	for (int i = 0; i < s.length(); i++) {
	    /* code */
	    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
	        {
	            std::cout << "YES" << std::endl;
	            present=1;
	            break;
	        }
	         
	}
	
	
	if(!present)
	    cout<<"NO"<<endl;
	
	
	
	
	return 0;
}