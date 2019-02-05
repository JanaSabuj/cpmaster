#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;cin>>n;
	int arr[100007];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	int q; cin>>q;
	while(q--){
		long long int x; cin>>x;
		cout<<upper_bound(arr,arr+n,x)-arr<<endl;
		
	}
	
	return 0;
}