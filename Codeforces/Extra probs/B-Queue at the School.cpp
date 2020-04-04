By greenindia, contest: Codeforces Round #163 (Div. 2), problem: (B) Queue at the School, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	int n,t;
	string s;
	
	cin>>n>>t>>s;
	
	while(t--){
	    
	    for (int i = 1; i < s.length(); i++) {
	        /* code */
	        if(s[i]=='G' && s[i-1]=='B')
	            {
	                s[i]='B';
	                s[i-1]='G';
	                i++;
	            }
	    }
	    
	    
	    
	}
	
	std::cout << s << std::endl;
	
	
	
	return 0;
}