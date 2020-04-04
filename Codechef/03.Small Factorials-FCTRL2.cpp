/**#include <iostream>
using namespace std;


	int fact(int n) ;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	

	
	for (int i=0; i<t; i++) {
	    cin>>n;
	    std::cout << fact(n) << std::endl;  
	}
	return 0;
}

int fact(int n) {
    if (n==0)
        return 1;
    else 
        return n*fact(n-1);
    
}
**/

// The above is the program for factorial of very small numbers.

#include<bits/stdc++.h> // one header for all the iostream files

using namespace std;
int mul(int x,int a[],int size1){
  int carry=0,i;
    for(i=0;i<size1;i++){
    int pro=a[i]*x+carry;
    a[i]=pro%10;
    carry=pro/10;
  }
  while(carry){
    a[size1]=carry%10;
    carry=carry/10;
    size1++;
  }
  return (size1);

}
void small_fac(int n){
    int a[10000],size1=1,i;
    a[0]=1;
    for(i=2;i<=n;i++)
        size1=mul(i,a,size1);
    for(i=size1-1;i>=0;i--)
        cout<<a[i];
        cout<<endl;
}
 int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    small_fac(n);
  }
  return 0;
}

/** MY REFURBISHED CODE SUBMITTED IN CODECHEF
#include <iostream>
using namespace std;


int mul (int x, int a[], int size) {
    
    int carry=0;
    
    for ( int i=0; i<size; i++) {
        int prod = a[i]*x+ carry;
        a[i]= prod%10;
        carry= prod/10;
        }
    
    while (carry) {
        a[size]=carry%10;
        carry=carry/10;
        size++;
        
    }
    
    return size;
    
}



void fac(int n) {
    
    int a[1000], size=1;
    a[0]=1;
    
    
    
    for (int x=2; x<=n; x++) {
        
        size= mul(x, a, size );
        
    }
    
    for (int i=size-1; i>=0; i--) {
        cout<<a[i];
    }
    
    
}




int main() {
	// your code goes here
	int t,n;
	cin>>t;
	
	while(t--) {
	    //factorial func call
	    cin>>n;
	    fac(n);
	    cout<<endl;
	    
	}
	   
	return 0;
}

**/


