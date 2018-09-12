// By greenindia, contest: Codeforces Beta Round #85 (Div. 2 Only), problem: (A) Petya and Strings, Accepted, #
 #include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	//cout<<"GfG!";
	string a,b;
	
	cin>>a>>b;
	
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	
	int alen=a.length();
	int blen=b.length();
	
	if(a == b )
	    cout<<0<<endl;
	 else if (a>b )   
	    cout<<1<<endl;
	    
	    else
	    cout<<-1<<endl;
	    
	
	 
	return 0;
}