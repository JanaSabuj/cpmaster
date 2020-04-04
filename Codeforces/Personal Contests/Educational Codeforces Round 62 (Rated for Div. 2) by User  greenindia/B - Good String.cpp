
1140 B - Good String.cpp GNU C++17 Accepted
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
   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int t;
    cin>>t;

    while(t--){
    	int n;
    	cin>>n;
    	string str;
    	cin>>str;

    	if(str[0]=='>' or str[n-1]=='<')
    		{cout<<0<<endl; }
    	else {
    		int cntl=0;
    		int cntr=0;
    		for (int i = 0; i < n; ++i)
    		{
    			/* code */
    			if(str[i]!='>')
    				cntl++;
    			else
    				break;
    		}
    		for (int i = n-1; i>=0; i--)
    		{
    			/* code */
    			if(str[i]!='<')
    				cntr++;
    			else
    				break;
    		}

    		int ans=min(cntr,cntl);

      cout<<ans<<endl;

    	}
    }
                  
     
    return 0;   
 }

