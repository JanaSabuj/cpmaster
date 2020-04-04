
1209 A - Paint the Numbers.cpp GNU C++17 Accepted

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<req<<endl;
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
//int power(int a,int b,int m){int req=1;while(b){if(b&1)req=(req*a)%m;b/=2;a=(a*a)%m;}return req;}
//int power(int a, int b){int req=1;while(b){if(b&1)req=req*a;b/=2;a=a*a;}return req;}
vector<int> v;

bool visited[200];

signed main() {

	// freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;



	int x;
	int req = 0;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int yy;
	for (int j = 0; j < 2010; j++) {
		yy++;
	}

	for (int i = 0; i < n; i++) {
		if (visited[i] == true)
				continue;

		req = req + 1;
		
		for (int j = i + 1; j < v.size(); j++)
			if (v[j] % v[i] == 0)
				visited[j] = true;
	}

	cout << req << endl;


	return 0;
}





1209 A - Paint the Numbers.cpp GNU C++17 Runtime error on pretest 1

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<req<<endl;
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
//int power(int a,int b,int m){int req=1;while(b){if(b&1)req=(req*a)%m;b/=2;a=(a*a)%m;}return req;}
//int power(int a, int b){int req=1;while(b){if(b&1)req=req*a;b/=2;a=a*a;}return req;}
vector<int> v;

bool visited[200];

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;



	int x;
	int req = 0;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int yy;
	for (int j = 0; j < 2010; j++) {
		yy++;
	}

	for (int i = 0; i < n; i++) {
		if (visited[i] == true)
				continue;

		req = req + 1;
		
		for (int j = i + 1; j < v.size(); j++)
			if (v[j] % v[i] == 0)
				visited[j] = true;
	}

	cout << req << endl;


	return 0;
}





1209 A - Paint the Numbers.cpp GNU C++17 Wrong answer on pretest 3

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<req<<endl;
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
//int power(int a,int b,int m){int req=1;while(b){if(b&1)req=(req*a)%m;b/=2;a=(a*a)%m;}return req;}
//int power(int a, int b){int req=1;while(b){if(b&1)req=req*a;b/=2;a=a*a;}return req;}


signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;

	vector<int> v;

	bool visited[201];

	int x;
	int req = 0;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int yy;
	for(int j=0; j<2010; j++){
		yy++;
	}

	for (int i = 0; i < n; i++) {
		if(visited[i] == true)
			continue;
		req = req + 1;
		for (int j = i + 1; j < v.size(); j++)
			if (v[j] % v[i] == 0)
				visited[j] = true;
	}

	cout << req << endl;
 

	return 0;
}




