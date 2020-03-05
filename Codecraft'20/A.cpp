By greenindia, contest: CodeCraft-20 (Div. 2), problem: (A) Grade Allocation, Accepted, #, Copy
/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
// 	freopen("input.txt", "r", stdin);
 	int t;
 	cin>>t;
 
 	while(t--){
 		int n, m;
 		cin>>n>>m;
 
 		int arr[n];
 		int total = 0;
 		for (int i = 0; i < n; ++i)
 		{
 			/* code */
 			cin>>arr[i];
 			total += arr[i];
 		}
 
 		if(total < m)
 			cout << total << endl;
 		else
 			cout << m << endl;
 	}
 
 
	return 0;
}
 
