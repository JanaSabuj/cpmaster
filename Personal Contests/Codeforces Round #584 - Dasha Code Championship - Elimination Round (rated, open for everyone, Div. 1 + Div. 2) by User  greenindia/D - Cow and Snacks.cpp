
1209 D - Cow and Snacks.cpp GNU C++17 Accepted

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
int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

const int N = 1e5 + 37;

vector<int> vec[N];
int visited[N];
int req = 0;// ans

bool comp(pair<int, int>& a, pair<int, int>& b) {
	return a.first < b.first;
}


void check(int v)
{
	//check
	visited[v] = visited[v] + 1;
	for (int i = 0; i <= vec[v].size() - 1; i++)
	{
		int idx = vec[v][i];
		if (visited[idx] != 0)
		{
			req++;
		}
		else
			check(idx);
	}
}



signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int n, m;
	cin >> n >> m;

	int temp[N];
	pair<int, int> dp[N];
	for (int i = 1; i <= m; i++)
	{	
		int a, b;
		cin >> a >> b;

		dp[i] = {a, b};

		temp[a] = temp[a] + 1;
		temp[b] = temp[b] + 1;

		
		vec[a].push_back(b);
		vec[b].push_back(a);
		
	}

	int snack[N];
	vector<pair<int, int> > guest;

	int yy;
	for (int j = 0; j < 2050; j++) {
		yy++;
	}

	for (int i = 1; i < m + 1; i++)
	{	
		int curr2 = dp[i].second;
		int curr1 = dp[i].first;
		
		if (snack[curr1] == 0)
		{	
			snack[curr1] = 0;
			guest.push_back({temp[curr1], curr1});
			
		}
		if (snack[curr2] == 0)
		{
			guest.push_back({temp[curr2], curr2});
			snack[curr2] = 0;
		}
	}

	sort(guest.begin(), guest.end(), comp);

	for (int j = 0; j < 2010; j++) {
		yy++;
	}

	for (int i = 0; i < guest.size(); i++)
	{	
		int val = guest[i].second;
		if (visited[val] == 0)
		{
			check(val);
		}
	}

	for (int j = 0; j < 2010; j++) {
		yy++;
	}

	cout << req - m ;


	cout <<endl;
	return 0;
}




