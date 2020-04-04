
1201 C - Maximum Median.cpp GNU C++17 Accepted

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

const int N = 2e5 + 5;
int arr[N];

int bsearch(int lo, int hi, int n, int k){

	while(lo < hi){
		int mid = lo + (hi - lo + 1)/2;

		//check
		int reqd = 0;
		for (int i = n/2; i < n ; ++i)
		{
			/* code */
			reqd += max(0LL, mid - arr[i]);
		}
		//check

		if(reqd<=k)
			lo = mid;
		else
			hi = mid - 1;
	}

	return lo;
}


signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;
 	
 	int n,k;
 	cin>>n>>k;

 	 
 	for (int i = 0; i < n; ++i)
 	{
 		/* code */
 		cin>>arr[i];
 	}

 	sort(arr, arr+n);

 	int lo=arr[n/2];
 	int hi = 2e9;

 	cout<< bsearch(lo,hi,n,k) <<endl;

	return 0;
}





1201 C - Maximum Median.cpp GNU C++17 Hacked

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
#define mp marre_pair
#define PI acos(-1)

//const int INF=1e9+5;//biintion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
 
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
//pq

signed main() {
// 	freopen("input.txt", "r" , stdin);
	crap;
	int t = 1;

	while (t--)
	{   
	    //
		int i, j, r, n, add = 0;
		cin >> n >> r;
		int arr[n];
		for (i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		
		
		if (n <= 3)
		{
			cout << arr[n / 2] + r;
			return 0;
		}
		
		priority_queue<int, vector<int>, greater<int> > prqueue;
		i = n / 2;
		
		
		while (i > 0 and arr[i - 1] == arr[i])
			i--;
		while (i < n)
		{
			prqueue.push(arr[i++]);
		}
		while (r > 0)
		{
			//pq

			int x1 = prqueue.top();
			prqueue.pop();
			i = 1;
			while (prqueue.size() and prqueue.top() == x1)
			{
				prqueue.pop();
				i++;
			}
			i = min(i, (int)(n / 2 + 1 - prqueue.size()));
			if (prqueue.size() == 0)
			{
                //pp
				cout << x1 + r / i;
				return 0;
			}
			int x2 = prqueue.top();
			int diff = x2 - x1;
			if (diff * i <= r)
			{
				r -= diff * i;
				while (i--)
					prqueue.push(x2);
			}
			else
			{

				cout << x1 + r / i;
				return 0;
			}
		}
		cout << prqueue.top();
	}

	return 0;
}





1201 C - Maximum Median.cpp GNU C++17 Wrong answer on pretest 6

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
#define mp marre_pair
#define PI acos(-1)

//const int INF=1e9+5;//biintion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
//pq

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;


	int i, j, r, n, add = 0;
	cin >> n >> r;
	int arr[n];

	for (i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	if (n <= 3)
	{
		cout << arr[n / 2] + r;
		return 0;
	}
    
	//p
    //q
	priority_queue<int, vector<int>, greater<int> > pqr;
	i = n / 2;
	//
	//

	while (i > 0 and arr[i - 1] == arr[i])
		i--;
	while (i < n)
	{
		pqr.push(arr[i++]);
	}


	while (r > 0)
	{
		int r1 = pqr.top();
		pqr.pop();
		i = 1;
		while (pqr.size() and pqr.top() == r1)
		{
			pqr.pop();
			i++;
		}
		i = min(i, (int)(n / 2 + 1 - pqr.size()));

		{

			cout << r1 + r / i;
			return 0;
		}
		int r2 = pqr.top();
		int diff = r2 - r1;
		if (diff * i <= r)
		{
			r -= diff * i;
			while (i--)
				pqr.push(r2);
		}
		else
		{

			cout << r1 + r / i;
			return 0;
		}
	}

	cout << pqr.top() <<endl;

	return 0;

}





1201 C - Maximum Median.cpp GNU C++17 Time limit exceeded on pretest 5

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
// #define int long long int
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
 	
 	 priority_queue <int > p;
 	 // p.push(-2);
 	 // p.push(-4);
 	 // p.push(-9);
 	 // p.push(-1);
 	 // p.push(-3);

 	 // while(!p.empty()){
 	 // 	cout<<p.top()<<endl;
 	 // 	p.pop();
 	 // }

 	 int n,k;
 	 cin>>n>>k;

 	 int arr[n];
 	 for (int i = 0; i < n; ++i)
 	 {
 	 	/* code */
 	 	cin>>arr[i];
 	 }

 	 sort(arr,arr+n);

 	 int mid = n/2;

 	 for (int i = mid; i < n; ++i)
 	 {
 	 	/* code */
 	 	p.push(-arr[i]);
 	 }

 	 while(k--){

 	 	int val = p.top();
 	 	val = val - 1;

 	 	p.pop();
 	 	p.push(val);


 	 }

 	 // while(!p.empty()){
 	 // 	cout<<p.top()<<endl;
 	 // 	p.pop();
 	 // }

 	 cout<< (-p.top()) <<endl;





	return 0;
}




