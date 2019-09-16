
1202 A - You Are Given Two Binary Strings....cpp GNU C++17 Accepted

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic.Do not touch.-----------------------------*/
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

// int binaryToDecimal(int n) 
// { 
//     int num = n; 
//     int dec_value = 0; 
  
//     // Initializing base value to 1, i.e 2^0 
//     int base = 1; 
  
//     int temp = num; 
//     while (temp) { 
//         int last_digit = temp % 10; 
//         temp = temp / 10; 
  
//         dec_value += last_digit * base; 
  
//         base = base * 2; 
//     } 
  
//     return dec_value; 
// } 

unsigned int getFirstSetBitPos(int n) 
{ 
    return log2(n & -n) + 1; 
} 


signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	int t;
	cin>>t;

	while(t--){
		string x,y;
		cin>>x>>y;

		reverse(x.begin(), x.end());
		reverse(y.begin(), y.end());

		int l=-1,r=-1;
		std::vector<int> v;
		for (int i = 0; i < x.length(); ++i)
		{
			/* code */
			if(x[i] == '1'){
			 	v.push_back(i);
			}
		}

		for (int i = 0; i < y.length(); ++i)
		{
			/* code */
			if(y[i] == '1'){
				r = i;
				break;
			}
		}

		 

		for(auto l : v){
			 if(l>= r){
			 	cout<< l - r <<endl;
			 	break;
			 }
		}




	}

	
 	
 	

	return 0;
}




