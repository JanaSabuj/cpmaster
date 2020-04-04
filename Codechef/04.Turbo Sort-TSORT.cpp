#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t,n;
	int arr[1000001] ={0};
	
	std::cin >> t;
	
	while (t--) {
	    cin>>n;
	    arr[n]++;
	    
	}
	
	for (int i=0; i<1000001; i++) {
	    while(arr[i]>0) { //very imp while statement, it shouldn't be if statement
	        std::cout << i << std::endl;
	        arr[i]--;
	    }
	}
	
	 
	return 0;
}