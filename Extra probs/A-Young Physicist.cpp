 By greenindia, contest: Codeforces Beta Round #63 (Div. 2), problem: (A) Young Physicist, Accepted, #
  #include <iostream>
using namespace std;

int main() {
  
  int t;
  cin>>t;
  
  int arr[2]={0};
  
  while(t--){
      
       int a,b,c;
       cin>>a>>b>>c;
       
       arr[0]+=a;
       arr[1]+=b;
       arr[2]+=c;
       
  }
  
  if(arr[0]==0 && arr[1]==0 && arr[3]==0)
    std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
   
  
  return 0;
}