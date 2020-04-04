//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 #define INF LLONG_MAX
 #define pb push_back
 #define mp make_pair
 //~ typedef vector<long long int> vi;
 //~ typedef long long ll;
 
 	 
   int main() {
 	freopen("input.txt", "r", stdin);
    crap;
                  
    long long int q;
    cin>>q;
    
    while(q--){
		
		long long int n,a,b;
		cin>>n>>a>>b;
		long long int val=0;
		long long int add=0;
		if( (double) b/2 <a )
			add=b;
		else
			add=a;
		
		//~ cout<<add<<endl;
		
		if( n%2 != 0)
			{val+=a; n--;}
		 
		 if(add == b)
			val+= (n/2) * add;
		 else
			val+= n*add;
		 
			
		cout<<val<<endl;
		
	}
     
     
      
    return 0;
 }

