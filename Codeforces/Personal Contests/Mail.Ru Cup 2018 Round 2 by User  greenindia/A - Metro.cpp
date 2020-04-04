
1055 A - Metro.cpp GNU C++17 Accepted
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,s;
	cin>>n>>s;
	
	int a[n],b[n];
	
	for (int i = 0; i < n; i++) 
	{
	    /* code */cin>>a[i];
	}
	for (int i = 0; i < n; i++) 
	{
	    /* code */cin>>b[i];
	}
	
	bool flag=false;
	
	if(a[0]==1 && a[s-1]==1)
	    flag=true;
	    
	if(a[0]==1)
	{
	        if(a[s-1]==0)
	        {
	            for (int i = s; i < n; i++) {
	                /* code */
	                if(a[i]==1)
	                {
	                    if(b[i]==1 && b[s-1]==1)
	                        flag=true;
	                }
	            }
	        }
	}
	    
	
	if(flag)
	    std::cout << "YES" << std::endl;
	else
	    std::cout << "NO" << std::endl;
	
	
	return 0;
}
