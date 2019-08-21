
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
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
struct drift {
	int x, y;
};

struct dir {
	char hor;
	char ver;
};

drift points[500];
dir points_dir[500];
bool visited[500];

void dfs(int node, int k) {


	visited[node] = true;
	int xc = points[node].x;
	int yc = points[node].y;
	char xdir = points_dir[node].hor;
	char ydir = points_dir[node].ver;

	// cout << xc << yc << xdir << ydir <<endl;

	for (int i = 0; i < k; ++i)
	{
		/* code */
		int xc1 = points[i].x;
		int yc1 = points[i].y;
		char xdir1 = points_dir[i].hor;
		char ydir1 = points_dir[i].ver;

		// cout << xc1 << yc1 << xdir1 << ydir1 <<endl;
		if (!visited[i]) {
			if (xc == xc1) {

				if (yc1 > yc and xdir == '>')
					dfs(i, k);
				else if (yc1 < yc and xdir == '<')
					dfs(i, k);
			} else if (yc == yc1) {
				// cout << "Hello";
				// cout << xc <<" " <<xc1 << xdir<<" ,";
				if (xc1 > xc and ydir == 'v') {

					dfs(i, k);
				}
				else if (xc1 < xc and ydir == '^')
					dfs(i, k);
			}

		}
	}

}


signed main() {

	// freopen("input.txt", "r", stdin);
	crap;



	int n, m;
	cin >> n >> m;
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < m; j++) {

			points[k].x = i;
			points[k].y = j;
			k++;
		}
	}

	int total = k;

	string h , v;
	cin >> h >> v;

	int k1 = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */

		for (int j = 0; j < m; j++) {

			points_dir[k1].hor = h[i];
			points_dir[k1].ver = v[j];
			k1++;
		}
	}

	bool isYes = true;
	for (int i = 0; i < k; ++i)
	{
		/* code */
		memset(visited, false, sizeof(visited));
		dfs(i, total);



		for (int i = 0; i < k ; ++i)
		{

			// cout << visited[i] << " ";
			if (!visited[i]) {
				isYes = false;
				break;
			}
		}

		if (!isYes)
			break;


	}


	if (isYes)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;




	return 0;
}




