
1114 C - Trailing Loves (or L'oeufs?).cpp GNU C++17 Accepted
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
   	// freopen("input.txt", "r", stdin);
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


1114 C - Trailing Loves (or L'oeufs?).cpp GNU C++17 Wrong answer on test 5
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
   	// freopen("input.txt", "r", stdin);
   	#define int long long int
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
     
     int n,b;
     cin>>n>>b;
     
     factorise(b);
     
     //~ for(auto x:vec)
		//~ cout<<x.first<<" "<<x.second<<endl;
     
     
     int ans=INT_MAX;
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


1114 C - Trailing Loves (or L'oeufs?).cpp GNU C++17 Wrong answer on test 5
//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 vector<pair<int,int>> vec;
 #define int long long int
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
   	// freopen("input.txt", "r", stdin);
   	#define int long long int
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
     
     int n,b;
     cin>>n>>b;
     
     factorise(b);
     
     //~ for(auto x:vec)
		//~ cout<<x.first<<" "<<x.second<<endl;
     
     
     int ans=INT_MAX;
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


1114 C - Trailing Loves (or L'oeufs?).cpp GNU C++17 Wrong answer on pretest 5
//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

#include<iostream>
using namespace std;
#include<math.h>

long long maxPrimeFactors(long long n) 
{ 
    // Initialize the maximum prime factor 
    // variable with the lowest one 
    long long maxPrime = -1; 
  
    // Print the number of 2s that divide n 
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1; // equivalent to n /= 2 
    } 
  
    // n must be odd at this point, thus skip 
    // the even numbers and iterate only for 
    // odd integers 
    for (long long int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
  
    // This condition is to handle the case 
    // when n is a prime number greater than 2 
    if (n > 2) 
        maxPrime = n; 
  
    return maxPrime; 
} 
 
int main()
{    
// 	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
    long long int N,B,i,c,noz,k;
	cin>>N>>B;
    
          noz=N;
          //~ j=B;
			
			i= maxPrimeFactors(B);
			//~ cout<<i;
            long long int n=B;
             long long int freq=0;
             while(n>0)
             {		
				 n/=i;
				 freq++;
				  
			 }   
               freq--;
                
                //~ cout<<i<<" "<<freq; 
                 //i is the highest prime, p is the frequency
                 c=0;
                 k=N;
                 while (k/i>0)
                 {
                       c+=k/i;
                       k/=i;
                 }
                 noz=min(noz,c/freq);
              
           
          cout<<noz;
    
}

1114 C - Trailing Loves (or L'oeufs?).cpp GNU C++17 Wrong answer on pretest 5
//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

#include<iostream>
using namespace std;
#include<math.h>

long long maxPrimeFactors(long long n) 
{ 
    // Initialize the maximum prime factor 
    // variable with the lowest one 
    long long maxPrime = -1; 
  
    // Print the number of 2s that divide n 
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1; // equivalent to n /= 2 
    } 
  
    // n must be odd at this point, thus skip 
    // the even numbers and iterate only for 
    // odd integers 
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
  
    // This condition is to handle the case 
    // when n is a prime number greater than 2 
    if (n > 2) 
        maxPrime = n; 
  
    return maxPrime; 
} 
 
int main()
{    
// 	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
    long long int N,B,i,c,noz,k;
	cin>>N>>B;
    
          noz=N;
          //~ j=B;
			
			i= maxPrimeFactors(B);
			//~ cout<<i;
            int n=B;
             int freq=0;
             while(n>0)
             {		
				 n/=i;
				 freq++;
				  
			 }   
               freq--;
                
                //~ cout<<i<<" "<<freq; 
                 //i is the highest prime, p is the frequency
                 c=0;
                 k=N;
                 while (k/i>0)
                 {
                       c+=k/i;
                       k/=i;
                 }
                 noz=min(noz,c/freq);
              
           
          cout<<noz;
    
}

1114 C - Trailing Loves (or L'oeufs?).cpp GNU C++17 Time limit exceeded on pretest 5
//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

#include<iostream>
using namespace std;
#include<math.h>
 
int main()
{    
// 	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
    long long int N,B,i,j,p,c,noz,k;
	cin>>N>>B;
    
          noz=N;
          j=B;
          for (i=2;i<=B;i++)
          {
              if (j%i==0)
              {   
                 p=0;
                 while (j%i==0)
                 {
                       p++;
                       j/=i;
                 }
                 c=0;
                 k=N;
                 //according to the formula
                 while (k/i>0)
                 {
                       c+=k/i;
                       k/=i;
                 }
                 noz=min(noz,c/p);
              }
          }
           
          cout<<noz;
    
}
