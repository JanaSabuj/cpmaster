
1178 D - Prime Graph.cpp GNU C++17 Accepted

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

bool isPrime(int x){
	if(x < 2) return false;
	if(x == 2) return true;
	if(!(x&1)) return false;
	for (int i = 3; i*i <=x ; i+=2)
	{
		/* code */
		if(x%i == 0)
			return false;
	}

	return true;
}



signed main() {
    
// 	freopen("input.txt", "r", stdin);
	crap;
 	
 	int n;
 	cin>>n;

 	int m=n;
 	while(!isPrime(m)) m++;

 	cout<<m<<endl;

 	cout<< n << " " << 1 <<endl;

 	for (int i = 0; i < n - 1; ++i)
 	{
 		/* code */
 		cout<< i+1 << " " <<i+2 <<endl;

 	}

 	for (int i = 0; i < m-n; ++i)
 	{
 		/* code */
 		cout<< i+1 <<" " << i+1+n/2 <<endl;
 	}


	return 0;
}





1178 D - Prime Graph.cpp GNU C++17 Wrong answer on test 1

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

bool isPrime(int x){
	if(x < 2) return false;
	if(x == 2) return true;
	if(!(x&1)) return false;
	for (int i = 3; i*i <=x ; i+=2)
	{
		/* code */
		if(x%i == 0)
			return false;
	}

	return true;
}



signed main() {
    
// 	freopen("input.txt", "r", stdin);
	crap;
 	
 	int n;
 	cin>>n;

 	int m=n;
 	while(!isPrime(m)) m++;

 	cout<<m<<endl;

 	for (int i = 0; i < n; ++i)
 	{
 		/* code */
 		cout<< i+1 << " " <<i+2 <<endl;

 	}

 	for (int i = 0; i < m-n; ++i)
 	{
 		/* code */
 		cout<< i+1 <<" " << i+1+n/2 <<endl;
 	}


	return 0;
}





1178 D - Prime Graph.cpp GNU C++17 Accepted

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


	int arr[90000];
	
	int brr[4566];

	int n;
	cin >> n;
	for (int i = 2; i * i < 50000; i++) {
		for (int j = i * i; j < 50000; j += i) {
			arr[j] = 1;
		}
	}
	int total = n;
	int ANS = 0;
	if (arr[total] == 1) {
		for (int i = 1; i <= n / 2; i++) {
			if (arr[total + i] == 0) {
				ANS = i;
				break;
			}
		}
	}
	cout << (ANS + n) << endl;

	////
	for (int i = 1; i <= n; i++) {
		if (i == n) {
			cout << i << " 1\n";
			break;
		}
		cout << i << " " << i + 1 << endl;
	}

	//brr
	total = 1;
	for (int i = 1; i <= ANS; i++) {
		if (total + 2 >= n) {
			int index = total + 2 - n;
			while (brr[index] == 1) index++;
			cout << total << ' ' << index << endl;
			break;
		}
		brr[total] = 1;

		brr[total + 2] = 1;

		cout << total << ' ' << total + 2 << endl;

		total += 3;


	}

	///

	return 0;
}




