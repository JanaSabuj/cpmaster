//greenindia-26/12/2018-18:42-Wed
 #include <bits/stdc++.h>
using namespace std;

int main() {
// 	cout<<"GfG!";

int t;
cin>>t;

while(t--)
{
    int p;
    cin>>p;
    // if(p>2048)
    //     std::cout << p/2048 << std::endl;
    // else{
        int count=0;
        while(p!=0)
    {   
        // if(p==4096)
            
        int x;
        x=log(p)/log(2);
        if(x>=12)
            x=11;
        
        int y;
        y= (int) (pow(2,x)+0.5);
        p-=y;
        count++;
        
    }
    std::cout << count << std::endl;
    // }
     
    
    
    
}


	return 0;
}