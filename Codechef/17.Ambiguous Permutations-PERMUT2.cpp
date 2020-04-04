#include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
 
    int t;
    
    while(cin>>t) {
        if(!t)
            break;
    int arr[t+1],pos[t+1];
    
    for (int i = 1; i <= t; i++) {
        /* code */
        cin>>arr[i];
        pos[arr[i]]=i;
    }
        int flag=0;
        for (int j = 1; j <= t; j++) {
            /* code */
            if(arr[j]!=pos[j]){
                flag= 1;
                break;
            }
        }
        
       if(flag)
        std::cout << "not ambiguous" << std::endl;
        else
        std::cout << "ambiguous" << std::endl;
        
        
        
    }
 
  
	return 0;
}