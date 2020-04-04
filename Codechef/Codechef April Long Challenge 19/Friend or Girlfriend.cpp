/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define dbg(x) cerr << #x << " = " << x << endl
 #define endl "\n"
 #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 const int INF=1e9+5;//billion
 #define MAX 100007
 string alpha="abcdefghijklmnopqrstuvwxyz";
//power (a^b)%m
 int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
   	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;

    
    int t;
    cin>>t;

    while(t--){
    	int n;cin>>n;
    	string str;char c;
    	cin>>str>>c;

    	std::vector<int> v;
    	// v.pb(0);
    	for (int i = 0; i < str.length(); ++i)
    	{
    		/* code */
    		if(str[i]==c)
    			v.pb(i);
    	}

    	int sz=v.size();

    	if(sz==0) {
    		cout<<0<<endl;
    		return 0;
    	}



    	int ans=0;

  		ans+= v[0]*(v[0]+1)/2;
  		 
  		ans+= (n-v[sz-1]-1)*(n-v[sz-1])/2;
  		 

  		for(int i=1; i<sz; i++){

  			ans+= (v[i]-v[i-1]-1)*(v[i]-v[i-1])/2;
  		 

  		}

  		int total= n*(n+1)/2;
  		cout<<total-ans<<endl;



    }
                  
     
    return 0;   
 }

