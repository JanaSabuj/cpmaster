
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

//const int INF=1e9+5;//billion
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

void bfs(std::vector<int> adj[], int start, int n, int red[], int m){
	bool visited[n+1];
	memset(visited,false,sizeof(visited));
	int par[n+1];
	int cnt[n+1];
	int nax[n+1];


	// visited[start] = true;
	par[start] = -1;
	if(red[start]){
		cnt[start] = 1;
		nax[start] = 1;
	}else
	cnt[start] = 0;

	queue<int> q;
	q.push(start);

	while(!q.empty()){

		int x = q.front();
		q.pop();

		for(auto neigh : adj[x]){
			if(!visited[neigh]){
				q.push(neigh);
				par[neigh] = x;
				if(red[x] and red[neigh])
					cnt[neigh] = cnt[x] + 1;
				else if(red[neigh])
					cnt[neigh] = 1;
				else
					cnt[neigh] = 0;
				nax[neigh] = max(cnt[neigh],nax[x]);
			}
		}
		visited[x] = true;

	}

	int req = 0;

	for(int i = 2; i<=n; i++){
		if(adj[i].size() == 1){
			//leaf
			if(nax[i]<=m)
				req++;
		}
	}


 cout << req <<endl;

}

signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	int n,m;
	cin>>n>>m;
	// cout << n << m;

	int red[n+1];
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		cin>>red[i];
	}

	int edges = n - 1;
	std::vector<int> adj[100005];

	while(edges--){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}


	bfs(adj,1, n, red,m);	
 	
 	

	return 0;
}




