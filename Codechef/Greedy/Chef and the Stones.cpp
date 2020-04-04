#include <bits/stdc++.h>
using namespace std;

  int main() {
	// your code goes here
	long long int t;
	cin>>t;
	
	while(t--)
	{
	    long long int n1,n2,m;
	    cin>>n1>>n2>>m;
	    
	    long long int x;
	    long long int l;
	    l = min( (m*(m+1)/2), n1);
	    x= min(l, n2 );
	    std::cout << n1+n2-2*x << std::endl;
	     
	}
	
	 
	return 0;
}
