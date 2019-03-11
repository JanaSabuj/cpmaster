//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
//God is Great 
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 #define int long long int 
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
   
 typedef vector<int> vi;
 	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;

    int a[n],b[n];
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>b[i];
    }

    map<long double,int> hash;
    int cnt=0;
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	if( a[i]==0) {
    		if(b[i]==0) cnt++;
    		continue;
    	}  
    	
    	long double x= (long double) -b[i]/a[i];
    	hash[x]++;
    }

    	int maxans=0; 
    for(auto x:hash){

    	if(maxans<x.second)
    	{
    		maxans=x.second;
 
    	}

    }
           
     cout<<maxans+cnt<<endl;

    return 0;
    
 }

