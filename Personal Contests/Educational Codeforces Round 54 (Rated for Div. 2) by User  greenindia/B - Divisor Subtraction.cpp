
1076 B - Divisor Subtraction.cpp GNU C++17 Time limit exceeded on test 4
#include <bits/stdc++.h>
using namespace std;

long long int first_prime(long long int num)
{
    if (num%2==0)
         return(2);
    for (long long int i=3;i<sqrt(num);i+=2)
    {
        if (num%i==0)
               return(i);
    }  
    return(num);
}




 int main() {
	// your code goes here
	
	long long int n;
	cin>>n;
	long long int count=0;
	
	while(n!=0)
	{
	        long long int d= first_prime(n);
	        n-=d;
	        count++;
	         
	}
	     
	     if(count!=0)
	        std::cout << count << std::endl;
	     
	return 0;
}

1076 B - Divisor Subtraction.cpp GNU C++17 Wrong answer on test 4
#include <bits/stdc++.h>
using namespace std;

int first_prime(int num)
{
    if (num%2==0)
         return(2);
    for (int i=3;i<sqrt(num);i+=2)
    {
        if (num%i==0)
               return(i);
    }  
    return(num);
}




int main() {
	// your code goes here
	
	int n;
	cin>>n;
	int count=0;
	
	while(n!=0)
	{
	        int d= first_prime(n);
	        n-=d;
	        count++;
	         
	}
	     
	     if(count!=0)
	        std::cout << count << std::endl;
	     
	return 0;
}
