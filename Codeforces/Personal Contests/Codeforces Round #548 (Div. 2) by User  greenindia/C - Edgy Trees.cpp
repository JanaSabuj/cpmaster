
1139 C - Edgy Trees.cpp GNU C++17 Accepted
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
 #define MOD 1000000007
 string alpha="abcdefghijklmnopqrstuvwxyz";

 //graph
 vector<int> adj[MAX];
 bool visited[MAX];
 vector<int> comp;
 int n,k;
 vector<int> redcount;
 //

//power
 int power(int a,int b,int m){
 	int ans=1;
 	while(b){
 		if(b&1)
 			ans=(ans*a)%m;
 		b/=2;
 		a=(a*a)%m;
 	}
 	return ans;

 }

 void dfs(int x){
 	visited[x]=true;
 	comp.pb(x);

 	for(auto u:adj[x]){
 		if(!visited[u])
 			dfs(u);
 	}
 }

 void dfsUtil(){

 	memset(visited,false,sizeof(visited));

 	for (int i = 1; i <=n; ++i)
 	{
 		/* code */
 		if(!visited[i]){
 			comp.clear();
 			dfs(i);

 			int p=comp.size();
 			redcount.pb(p);

 		}
 	}
 }

   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    
    cin>>n>>k;

    for (int i = 0; i < n-1; ++i)
    {
    	/* code */
    	int x,y,c;
    	cin>>x>>y>>c;

    	if(c==0){
    		adj[x].pb(y);
    		adj[y].pb(x);
    	}
    }

    dfsUtil();

    int total= power(n,k,MOD);

    int bad=0;
    for(auto p:redcount)
    	bad+=power(p,k,MOD);

     bad%=MOD;

     int ans= total-bad;
     if(ans<0)
     	ans+=MOD;

     ans=ans%MOD;
     cout<<ans<<endl;

     
    return 0;   
 }


1139 C - Edgy Trees.cpp GNU C++17 Wrong answer on test 8
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
 #define MOD 1000000007
 string alpha="abcdefghijklmnopqrstuvwxyz";

 //graph
 vector<int> adj[MAX];
 bool visited[MAX];
 vector<int> comp;
 int n,k;
 vector<int> redcount;
 //

//power
 int power(int a,int b,int m){
 	int ans=1;
 	while(b){
 		if(b&1)
 			ans=(ans*a)%m;
 		b/=2;
 		a=(a*a)%m;
 	}
 	return ans;

 }

 void dfs(int x){
 	visited[x]=true;
 	comp.pb(x);

 	for(auto u:adj[x]){
 		if(!visited[u])
 			dfs(u);
 	}
 }

 void dfsUtil(){

 	memset(visited,false,sizeof(visited));

 	for (int i = 1; i <=n; ++i)
 	{
 		/* code */
 		if(!visited[i]){
 			comp.clear();
 			dfs(i);

 			int p=comp.size();
 			redcount.pb(p);

 		}
 	}
 }

   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    
    cin>>n>>k;

    for (int i = 0; i < n-1; ++i)
    {
    	/* code */
    	int x,y,c;
    	cin>>x>>y>>c;

    	if(c==0){
    		adj[x].pb(y);
    		adj[y].pb(x);
    	}
    }

    dfsUtil();

    int total= power(n,k,MOD);

    int bad=0;
    for(auto p:redcount)
    	bad+=power(p,k,MOD);

     bad%=MOD;

     int ans= total-bad;
     if(ans<0)
     	ans+=bad;

     ans=ans%MOD;
     cout<<ans<<endl;

     
    return 0;   
 }


1139 C - Edgy Trees.cpp GNU C++17 Wrong answer on test 8
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
 #define MOD 1000000007
 string alpha="abcdefghijklmnopqrstuvwxyz";

 //graph
 vector<int> adj[MAX];
 bool visited[MAX];
 vector<int> comp;
 int n,k;
 vector<int> redcount;
 //

//power
 int power(int a,int b,int m){
 	int ans=1;
 	while(b){
 		if(b&1)
 			ans=(ans*a)%m;
 		b/=2;
 		a=(a*a)%m;
 	}
 	return ans;

 }

 int dfs(int x){
 	visited[x]=true;
 	comp.pb(x);

 	for(auto u:adj[x]){
 		if(!visited[u])
 			dfs(u);
 	}
 }

 void dfsUtil(){

 	memset(visited,false,sizeof(visited));

 	for (int i = 1; i <=n; ++i)
 	{
 		/* code */
 		if(!visited[i]){
 			comp.clear();
 			dfs(i);

 			int p=comp.size();
 			redcount.pb(p);

 		}
 	}
 }

   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    
    cin>>n>>k;

    for (int i = 0; i < n-1; ++i)
    {
    	/* code */
    	int x,y,c;
    	cin>>x>>y>>c;

    	if(c==0){
    		adj[x].pb(y);
    		adj[y].pb(x);
    	}
    }

    dfsUtil();

    int total= power(n,k,MOD);

    int bad=0;
    for(auto p:redcount)
    	bad+=power(p,k,MOD);

     bad%=MOD;

     int ans= total-bad;
     if(ans<0)
     	ans+=bad;

     ans=ans%MOD;
     cout<<ans<<endl;

     
    return 0;   
 }

