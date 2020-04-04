
1095 A - Repeating Cipher.cpp GNU C++17 Accepted
 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
// 	int arr[n];
string arr;
// 	for (int i = 0; i < arr.length(); i++) {
// 	    /* code */
// 	    cin>>arr[i];
// 	}
cin>>arr;
	
	std::vector<string> vec ;
	int c=2;
	for (int i = 0; i < arr.length();) {
	    /* code */
	    string s;
	    s=arr[i];
	    vec.push_back(s);
	    i+=c;
	    c++;
	    
	}
	
// 	std::cout <<  << std::endl;

        // for (int i = 0; i < vec.size(); i++) {
        //     /* code */
        //     cout<<vec[i];
        // }
        for (auto i = vec.begin(); i != vec.end(); ++i)
    std::cout << *i ;
        
	
	return 0;
}
