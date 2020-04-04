//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
//God is Great 
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define endl "\n"
 #define int long long int 
 #define double long double
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)

#define MAX 100007
vector<int> adj[MAX];
int dist[MAX];
double prob[MAX];

void bfs(){

	bool visited[MAX];
	memset(visited,false,sizeof(visited));

	queue<int> q;
	q.push(1);
	dist[1]=0;
	prob[1]=1;
	visited[1]=true;

	while(!q.empty()){

		int x=q.front();
		q.pop();
		int cnt= adj[x].size()-1;
		if(x==1) cnt++;

		for(auto child:adj[x]){
			if(!visited[child]){
				dist[child]=dist[x]+1;
				prob[child]= (double) prob[x]/cnt;
				visited[child]=true;
				q.push(child);
			}
		}
 
	}
 
	//end
}

 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;

    for (int i = 0; i < n-1; ++i)
    {
    	/* code */
    	int x,y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }

    bfs();
          
    double ans=0;
    for(int i=2;i<=n;i++){
    	if(adj[i].size()==1)
    		ans+= prob[i]*dist[i];
    }        

    cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
     
    return 0;
    
 }

