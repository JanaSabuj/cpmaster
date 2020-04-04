// By greenindia, contest: VK Cup 2012 Qualification Round 1, problem: (A) Next Round, Accepted, #
 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int arr[n];
	
	for(int i=0; i<n; i++ ) {
		cin>>arr[i];
		
		
	}
	
	int kth= arr[k-1];
	int count=0;
	
	for(int i=0; i<n; i++ ) {
		 if(arr[i]!=0 && arr[i]>=kth)
		 count++;
			
	}
	
	cout<<count<<endl;
	
	
	
	return 0;
}