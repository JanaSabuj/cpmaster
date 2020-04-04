By greenindia, contest: Codeforces Round #517 (Div. 2, based on Technocup 2019 Elimination Round 2), problem: (A) Golden Plate, Accepted, #
    #include<bits/stdc++.h>
   using namespace std;

 
#define double long double

#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i>=b;i--)
#define loopm(i,a,b,step) for(int i=a;i<b;i+=step)
#define loopbm(i,a,b,step) for(int i=a;i>=b;i-=step)

#define pb push_back
#define init(arr,val) memset(arr,val,sizeof(arr))
// #define endl "\n"

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)

 int main(){
  _; 
 
//Code goes here
   int w,h,k;
   cin>>w>>h>>k;
   
   int sum=0;
   loop(i,1,k+1)
   {
       
       int wid=w-4*(i-1);
       int hei=h-4*(i-1);
       
       int boxes= 2*wid+ 2*hei- 4;
       sum+=boxes;
       
       
       
   }
   
   std::cout << sum << std::endl;
   
   
   
	return 0;
}



