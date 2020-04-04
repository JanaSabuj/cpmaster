#include <bits/stdc++.h>
using namespace std;


int foundgcd(int a, int b){
    while(b!=0){
        int remainder= a%b;
        a=b;
        b=remainder;
    }
    return a;
}

 
int findgcd(int arr[],int n){
    
    int ans=arr[0];
    for (int i = 0; i < n; i++) {
        /* code */
        ans=foundgcd(arr[i],ans);
    }
    
    return ans;
    
}

 
int main() {
	//cout<<"GfG!";
	int t,n;
	cin>>t;
	
	while(t--) {
	    cin>>n;
	    
	    int arr[n];
	     
	    for (int i = 0; i < n; i++) {
	        /* code */
	        cin>>arr[i];
	    }
	    
	    int gcd=findgcd(arr,n);
	    
	    for (int i = 0; i < n; i++) {
	        /* code */
	        cout<<arr[i]/gcd<<" ";
	    }
	    
	    cout<<endl;
	}
	
	 
	return 0;
}