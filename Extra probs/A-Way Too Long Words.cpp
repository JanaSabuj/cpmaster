// By greenindia, contest: Codeforces Beta Round #65 (Div. 2), problem: (A) Way Too Long Words, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
		
		string a;
		cin>>a;
		
		if(a.length()<=10){
			cout<< a <<endl;
		}
		
		else {
		    int n= a.length();
		    string f;
		    f= a[0];
		    string l;
		    l= a[n-1];
		    cout<<f<<n-2<<l<<endl;
		}
		
		
	}
	
	
	 
	
	
	return 0;
}