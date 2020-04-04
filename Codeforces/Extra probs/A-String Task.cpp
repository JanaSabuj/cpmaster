 // By greenindia, contest: Codeforces Beta Round #89 (Div. 2), problem: (A) String Task, Accepted, #
 #include<bits/stdc++.h>
using namespace std;

int main() {
	
	string a,b;
	cin>>a;
	
	transform(a.begin(), a.end(),a.begin(),::tolower);
// 	cout<<a;
	
	for(int i=0; i<a.length(); i++) {
		if(a[i]=='a'|a[i]=='e'|a[i]=='i'|a[i]=='o'|a[i]=='u'|a[i]=='y')
			{
			    continue;
			    
			}
		else
		     {
		         b.push_back('.');
		         b.push_back(a[i]);
		     }
	}
	
	std::cout << b << std::endl;
	return 0;
}