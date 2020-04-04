By greenindia, contest: CodeCraft-20 (Div. 2), problem: (B) String Modification, Accepted, #, Copy
/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
// 	freopen("input.txt", "r", stdin);
 
	int t;
	cin >> t;
 
	while (t--) {
		int n;
		cin >> n;
 
		string str;
		cin >> str;
		
		vector<pair<string,int>> ans;
		// SABUJ
		for(int k = 1; k <= n; k++){
			// no of rots
			string first = str.substr(k - 1, n - k + 1);
			string last = str.substr(0, k - 1);
 
			if(n%2 == k%2)
				reverse(last.begin(), last.end());
			// final string after n - k + 1 rotations
			string concat = first + last;
			ans.push_back({concat, k});
		}
 
		sort(ans.begin(), ans.end());
		cout << ans[0].first << endl;
		cout << ans[0].second << endl;
	}
 
 
 
 
	return 0;
}
 
