 //Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 // #define INF LLONG_MAX 
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
 #define int long long int
  
 typedef long long ll;
 typedef vector<int> vi;


 	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;
    
    int n;
    cin>>n;

    if(n==1) {cout<<1<<endl; return 0;}

    int loc[n],h[n];
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>loc[i]>>h[i];
    }

    int cnt=2;
    for (int i = 1; i <n-1 ; ++i)
    {
    	/* code */  
    	if(loc[i]-h[i]>loc[i-1])
    		cnt++;
    	else if( loc[i]+h[i]<loc[i+1]){
    		cnt++;
    		loc[i]=loc[i]+h[i];
    	}
    }

    cout<<cnt<<endl;


     
    return 0;
    
 }

