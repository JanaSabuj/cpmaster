
1201 A - Important Exam.cpp GNU C++17 Accepted

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


signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;
 	
 	int n,m;
 	cin>>n>>m;

 	std::vector<string> vec;

 	for (int i = 0; i < n; ++i)
 	{
 		/* code */
 		string str;
 		cin>>str;
 		vec.push_back(str);
 	}

 	int val[m];
 	for (int i = 0; i < m; ++i)
 	{
 		/* code */
 		cin>>val[i];
 	}

 	 
 	int ans = 0;
 	for (int i = 0; i < m; ++i)
 	{
 		/* code */
 		map<char,int> hash;
 		for(auto x:vec){

 			
 			hash[x[i]]++;
 		}

 		int nax = 0;
 		for(auto x:hash){
 			nax = max(nax,x.second);
 		}

 		ans += nax * val[i];

 	}
 	
 	cout<<ans<<endl;

	return 0;
}





1201 A - Important Exam.cpp GNU C++17 Accepted

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


signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;
	int m;
	cin >> m;
	int M[m + 1] = {0};
	int cnt[m + 1][5] = {0};
	string s;
	for (int  i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			cnt[j][s[j] - 'A']++;
		}
	}
	for (int l = 0; l < m; l++)
	{
		cin >> M[l];
	}
	int summ = 0;
	for (int k = 0; k < m; k++)
	{
		int max = 0;
		for (int z = 0; z < 5; z++)
		{
			if (cnt[k][z] > max)max = cnt[k][z];
		}
		summ += max * M[k];
	}
	cout << summ << endl;






	return 0;
}




