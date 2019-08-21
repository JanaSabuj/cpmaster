
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

void bfs(std::vector<int> adj[], int n){
	n = n+1;
	int color[n];
	for (int i = 0; i <= n; ++i)
	{
		/* code */
		color[i] = -1;
	}

	color[1] = 1;
	queue<int> q;
	q.push(1);

	while(!q.empty()){
		int x = q.front();
		q.pop();

		 for( auto neigh : adj[x]){
		 	if(color[neigh]==-1){
		 		q.push(neigh);
		 		color[neigh] = 1 - color[x];
		 	}
		 }
	}

	int red=0,blue=0;
	int friends[n];
	for(int i = 1; i<=(n-1); i++){
		// cout << i << " " << color[i] <<endl;
		if(color[i] == 1) red++;
		else if(color[i] == 0) blue++;

		int x = adj[i].size();
		friends[i] = x;
	}

	int req = 0;
	for(int i=1; i<=(n-1); i++){
		if(color[i] == 1){
			//red
			req += (blue - friends[i]);
		}
	}

	cout << req <<endl;

}

signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin>>n;
	std::vector<int> adj[n+1];
	for (int i = 0; i < (n-1); ++i)
	{
		/* code */
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	bfs(adj,n);

 	
 	

	return 0;
}




