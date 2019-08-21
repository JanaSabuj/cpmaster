
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

struct drift
{
	int x,y;
};
int nodes;
drift points[101];
bool visited[101];

int dfs(int e){

	visited[e] = true;

	for (int i = 1; i <=nodes; ++i)
	{
		/* code */
		if(!visited[i]){
			//condition of edge
			if(points[i].x == points[e].x or points[i].y == points[e].y)
				dfs(i);
		}
	}
}

void DFS(){
	memset(visited,false,sizeof(visited));

	int conn_comp = 0;

	for (int i = 1; i <=nodes ; ++i)
	{
		/* code */
		if(!visited[i]){
			dfs(i);
			conn_comp++;
		}
	}

	cout << conn_comp - 1  <<endl;
}

signed main() {
    
	freopen("input.txt", "r", stdin);
	crap;

	// int nodes;
	cin>>nodes;

	for (int i = 1; i <=nodes ; ++i)
	{
		/* code */
		int a,b;
		cin>>a>>b;
		points[i].x = a;
		points[i].y = b;
	}

	DFS();

	return 0;
}




