
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

int noOfDivs(int n) {

	int count = 0;
	for (int i = 1; i * i <= n ; ++i)
	{
		/* code */
		if (n % i == 0) {
			if (n / i == i) count += 1;
			else
				count += 2;
		}
	}

	return count;

}


signed main() {

	freopen("input.txt", "r", stdin);
	crap;

 

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		 
 		int i=2;
 		int first = 1;
 		int second = 1;
 		int count=1;

 		while(count <= n){

 			if(i%2 == 0){
 				first = second;
 				second = noOfDivs(i+1);

 				count = first * second; 
 			}else{

 				first = second;
 				second = noOfDivs( (i + 1) / 2);
 				count = first*second;

 			}

 			i++;

 		}

 		cout<< (i * (i - 1)) / 2 <<endl;




	}




	return 0;
}




