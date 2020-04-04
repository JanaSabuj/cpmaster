// By greenindia, contest: Codeforces Round #197 (Div. 2), problem: (A) Helpful Maths, Accepted, #
 #include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	string exp, num;
	
	cin>>exp;
	
	for (int i = 0; i < exp.length(); i++) {
	    /* code */
	    if(exp[i]!='+'){
	        num.push_back(exp[i]);
	        	    }
	     
	}
	
	sort(num.begin(),num.end());
	
// 	cout<<num;
	for (int i = 0; i < num.length(); i++) {
	    /* code */cout<<num[i];
	    if(i!=num.length()-1)
	    cout<<"+";
	}
	
	
	
	return 0;
}