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

	int n, k;
	cin >> n >> k;

	string str;
	cin >> str;

	string temp;
	for (int i = 0; i < k; i++) {
		temp += str[i];
	}

	int j = 0;
	for (int i = k; i < n; i++) {
		temp += str[j];
		j++;
	}

	// cout << temp << endl;	

	int less = -1;
	for(int i = k; i < n; i++){
		if(temp[i] < str[i])
		{
			less = i;
			break;
		}
	}

	if(less == -1){
		cout << n <<endl;
		cout << temp <<endl;
		return 0;
	}


	int f = 0;
	for (int i = k; i < less; i++) {
		if (temp[i] > str[i]) {
			f = 1;
			break;
		}  
	}

	if (f) {
		cout << n <<endl;
		cout << temp << endl;
		return 0;
	}

	int ptr = k;
	for (int i = k; i < n; i++) {
		
		if(temp[i] < str[i]){
			ptr = i;
		}
	}

	// cout << ptr <<endl;
	// cout << temp[ptr]  <<endl;

	cout << n <<endl;
	for(int i = 0; i < n; i++){
		if((i == (ptr - k)) or i == ptr)
			cout << (temp[ptr] - '0' + 1);
		else if((i > (ptr - k )and i < k) or (i > ptr))
			cout << "0" ;
		else
			cout << temp[i];
	}
	cout <<endl;

	return 0;
}