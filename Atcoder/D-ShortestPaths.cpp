/*
Sabuj Jana / @greenindia
https://www.janasabuj.github.io
*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define double long double
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define endl "\n"
void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;} 
void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}
const int mod = 1e9 + 7;
const int N = 2e5 + 7;

vi adj[N];

void bfs(int src, int dest) {
	vi dist(dest + 1, INT_MAX);// dist[i] = shortest path from 1 to i
	vi ways(dest + 1, 0); // ways[i] = no of shortest ways from 1 to i

	queue<int> q;
	q.push(src);

	dist[src] = 0;
	ways[src] = 1;

	// u -> v
	//   a
	// b   c
	while(!q.empty()) {
		int u = q.front();
		q.pop();

		for(auto v: adj[u]) {
			if(dist[v] > dist[u] + 1) {
				q.push(v);
				dist[v] = dist[u] + 1;				
				ways[v] = ways[u];
			}else if(dist[v] == dist[u] + 1) {
				// duplicate shortest paths considered
				ways[v] = (ways[v] + ways[u]) % mod;
			}
		}
	}

	cout << ways[dest] << endl;
}

void solve() {
	int n, m;
	cin >> n >> m;

	int a, b;
	for (int i = 0; i < m; ++i){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	bfs(1, n);

}

#define SABUJ_JANA_WxF 1
signed main() {
	crap;	
#ifdef SABUJ_JANA_WF
	auto start = chrono::high_resolution_clock::now();
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("error.txt", "w", stderr);
#endif

	int t = 1; 
	// cin >> t;
	while(t--) solve();  
	
#ifdef SABUJ_JANA_WF
	auto stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
	cerr << "Time taken :\n" << duration.count() / 1000000.0 << "s" << "\n";
#endif
	return 0;
}