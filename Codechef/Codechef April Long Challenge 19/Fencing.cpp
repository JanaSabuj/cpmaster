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
    	int n,m,k;
    	cin>>n>>m>>k;

    	set<pair<int,int>> s;

    	while(k--){
    		int x,y;
    		cin>>x>>y;
    		s.insert({x,y});
    	}

    	// for(auto x:s)
    	// 	cout<<x.first<<" "<<x.second<<endl;

    	int cost=0;

    	for(auto x:s){

    		int r=x.first;
    		int c=x.second;

    		

    		// if( r==1 or r==n or c==1 or c==m){

    		// 	if( ((r==1) or (r==n)) and ((c==1) or (c==m)) )
    		// 		cost+=2;
    		// 	else
    		// 		cost+=1;
 
    		// }

    		int X[]={1,0,-1,0};
    		int Y[]={0,1,0,-1};

    		for(int i=0; i<4; i++){
    			 
    				if( (s.find ({r+X[i], c+Y[i]}) )==s.end())
    					cost++;
    			 
    		}

    		 

 
    		}

    		cout<<cost<<endl;

    }
                  
     
    return 0;   
 }

