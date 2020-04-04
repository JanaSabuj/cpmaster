By greenindia, contest: Codeforces Beta Round #84 (Div. 2 Only), problem: (A) Nearly Lucky Number, Accepted, #
 #include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	long long n;
	cin>>n;
	
	long long count=0;
	while(n>0)
	{
	    int dig=n%10;
	    if(dig==7 || dig==4)
	        count++;
	   n/=10;
	    
	}
	
	if(count==4 || count==7)
	    std::cout << "YES" << std::endl;
	else
	    std::cout << "NO" << std::endl;
	
	
	
	return 0;
}