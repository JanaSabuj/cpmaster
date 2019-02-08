//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 bool isPrime(int n){
	 
	 if(n<2) return false;
	 if(n==2) return true;
	 if(n%2==0) return false;
	 for(int i=3; i*i<=n; i+=2){
		 
		 if(n%i==0)
			return false;
		 
	 }
	 
	 return true;
	 }
 
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
     
     int n;
     cin>>n;
     
     for(int m=1; m<=1000; m++){
		 
		 int x=n*m+1;
		 if(!isPrime(x))
			{cout<<m<<endl;break;}
		 
	 }
     
     
    return 0;
 }

