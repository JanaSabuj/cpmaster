
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
 
// int arr[600005];
// int _size[600005];


void initialize(int arr[], int _size[],  int N){
	for (int i = 0; i <= N ; ++i)
	{
		/* code */
		arr[i] = i;
		_size[i] = 1;
	}
}

int root(int arr[], int i){
	while(arr[i] !=i){
		arr[i] = arr[arr[i]];
		i = arr[i];
	}

	return i;
}

void w_union(int arr[], int _size[], int a, int b){
	int root_a = root(arr,a);
	int root_b = root(arr,b);
	if(root_a == root_b) return;
	else if(_size[root_a] < _size[root_b]){
		arr[root_a] = arr[root_b];
		_size[root_b] += _size[root_a];
	}else {
		arr[root_b] = arr[root_a];
		_size[root_a] += _size[root_b];
	}
}



signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	

	int N,M;
	cin>>N>>M;

	int arr[N+1];
	int _size[N+1];

	initialize(arr,_size,N);

	while(M--){
		int sz;
		cin>>sz;

		std::vector<int> vec;
		for (int i = 0; i < sz; ++i)
		{
			/* code */
			int x;cin>>x;vec.push_back(x);
		}

		for(int i = 1 ; i<vec.size(); i++){
			w_union(arr,_size,vec[i-1],vec[i]);
		}

	}

	for(int i = 1 ; i<= N ; i++){
		cout << _size[root(arr,i)] <<" ";
	}
 	
 	

	return 0;
}

 




