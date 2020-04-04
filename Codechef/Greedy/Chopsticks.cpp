 #include <bits/stdc++.h>
using namespace std;
 
int main() {
    // your code goes here
   
    int n,d;
    cin>>n>>d;
   
    std::vector<int> vec ;
    for (int i = 0; i < n; i++) {
        /* code */
        int x;
        cin>>x;
         vec.push_back(x);
       
    }
   
    sort(vec.begin(),vec.end());
   
    int numpairs=0;
    int i=0;
    while ( i < n-1) {
        /* code */
        if(vec[i+1]-vec[i]<=d)
            {numpairs++;
            i+=2;}
           else
            i++;
           
    }
   
    std::cout << numpairs << std::endl;
     
    return 0;
}