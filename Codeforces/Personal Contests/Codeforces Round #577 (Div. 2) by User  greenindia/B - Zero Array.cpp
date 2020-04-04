
1201 B - Zero Array.cpp GNU C++17 Accepted

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

	int n;
	cin>>n;

	int arr[n];
	int sum=0;
	int nax=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
		sum += arr[i];
		nax = max(nax,arr[i]);
	}

	if(!(sum&1) and nax<= (sum/2))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

 	
 	

	return 0;
}





1201 B - Zero Array.cpp GNU C++17 Accepted

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

	// freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;
	
	int total = 0;
	int maxi = 0;
	while (n--) {
		int temp;
		cin >> temp;
		total += temp;
		if (maxi < temp)maxi = temp;

	}

	if (total % 2 == 1) {cout << "NO" << endl; return 0;}

	else {

		total -= maxi;
		if (total >= maxi)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	//end
	return 0;
}





1201 B - Zero Array.cpp GNU C++17 Time limit exceeded on pretest 8

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
 	
 	int n;
 	cin>>n;

 	int arr[n];

 	int sum = 0;
 	for (int i = 0; i < n; ++i)
 	{
 		/* code */
 		cin>>arr[i];
 		sum += arr[i];
 	}

 	sort(arr,arr+n);
 	int maxi = arr[n-1];

 	for (int i = 0; i <= sum/2 ; ++i)
 	{
 		/* code */
 		if(( sum - 2 * i) % n == 0){
 			int temp = (sum - 2*i) / n ;
 			if(temp<= maxi){
 				cout<<"YES"<<endl;
 				return 0;
 			}
 		}
 	}


 	cout<<"NO"<<endl;

	return 0;
}




