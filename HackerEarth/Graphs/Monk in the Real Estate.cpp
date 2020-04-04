#include <bits/stdc++.h>
using namespace std;

 
int main() {
// 	cout<<"GfG!";

int t;
cin>>t;


 
while(t--)
{
    
    int n,x,y;
    cin>>n;
    std::set<int> s ;
    
    for (int i = 0; i < n; i++) {
        /* code */
        cin>>x>>y;
        s.insert(x);
        s.insert(y);
         
    }
    
    
    std::cout << s.size() << std::endl;
    
     
    
}
 
	return 0;
}
