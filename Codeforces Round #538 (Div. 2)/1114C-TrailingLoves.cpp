//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 #define int long long int
 vector<pair<int,int>> vec;
 
 
 void factorise(int b){
	 
	 //powers of the prime 2
	 int cnt=0;
	 if(b%2==0){
		while(b%2==0){
		 
		 cnt++;
		 b=b>>1;//b=b/2;
		 
		}
	  
		vec.push_back({2,cnt});
	 }
	 // powers of the rem primes
	 for(int i=3; i*i<=b; i+=2){
		 
		 if(b%i==0){
				 cnt=0;
				 while(b%i==0){
					 cnt++;
					 b/=i;
				 }
			 vec.push_back({i,cnt});
		 }
		 
	 }
	 
	 if(b>2)// if the last prime is remaining
		vec.push_back({b,1});	
	 
	 }
 
 #undef int
  int main() {
   	freopen("input.txt", "r", stdin);
 #define int long long int
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
     
     int n,b;
     cin>>n>>b;
     
     factorise(b);
     
     //~ for(auto x:vec)
		//~ cout<<x.first<<" "<<x.second<<endl;
     
     
     int ans= LLONG_MAX;
     // take every pair of (prime,power). Keep on dividing my prime and adding and at the end,divide the ans by power/
     for(auto x:vec){
		 
		 int cnt=0;
		 int num=x.first;
		 int power=x.second;
		 
		 int M=n;//given no whose factorial is to be found
		 while(M){
			 
			 cnt+=M/num;
			 M/=num;
		 }
		 
		 ans=min(ans,cnt/power);
		 
	 }
     
     cout<<ans<<endl;
     
    return 0;
 }

