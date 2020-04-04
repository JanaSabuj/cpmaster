 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
	    /* code */
	    cin>>arr[i];
	}
	
	
	sort(arr,arr+n);
	
	int a,b;
	a= arr[n-1]-arr[1];
	b=arr[n-2]-arr[0];
	std::cout << min(a,b) << std::endl;
	
	
	
	
	
	return 0;
}