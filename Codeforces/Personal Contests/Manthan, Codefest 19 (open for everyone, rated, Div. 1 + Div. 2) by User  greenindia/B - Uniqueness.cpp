
1208 B - Uniqueness.cpp GNU C++17 Accepted

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
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}

	bool isValid = true;
	
	int ans = n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		// i - end of prefix
		map<int, int> hash;

		for (int j = 0; j < i; j++) {
			hash[arr[j]]++;
			if (hash[arr[j]] == 2) {
				isValid = false;
				break;

			}
		}


		if (isValid) {
			int li = n;
			//suffix
			for (int j = n - 1; j >= i; j--) {

				hash[arr[j]]++;
				if (hash[arr[j]] == 1) {
					// req = min(req, j - i);
					li = j;
				} else
					break;

			}


			ans = min(ans, li - i);
		}



	}

	cout << ans << endl;

	return 0;
}





1208 B - Uniqueness.cpp GNU C++17 Wrong answer on test 4

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
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}

	bool isValid = true;
	
	int ans = n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		// i - end of prefix
		map<int, int> hash;

		for (int j = 0; j < i; j++) {
			hash[arr[j]]++;
			if (hash[arr[j]] == 2) {
				isValid = false;
				break;

			}
		}


		if (isValid) {
			int req = n;
			//suffix
			for (int j = n - 1; j >= i; j--) {

				hash[arr[j]]++;
				if (hash[arr[j]] == 1) {
					req = min(req, j - i);
				} else
					break;

			}


			ans = min(ans, req);
		}



	}

	cout << ans << endl;

	return 0;
}





1208 B - Uniqueness.cpp GNU C++17 Accepted

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

int arr[2005];

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;

	set<int> s;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		s.insert(arr[i]);
	}

	int x;
	for(int j=0; j<4005; j++){
		x++;
	}

	//ans
	if (s.size() == n) {
		cout << 0 << endl;
		return 0;
	}
	int ans = 0;

	s.clear();

	for (int i = 1; i <= n; ++i) {
		
		if (s.size() != (i - 1)) {
			break;
		}

		set<int> cntset = s;

		int count = i - 1;

		for (int j = n; j >= i; j--) {

			if (cntset.count(arr[j])) {
				break;
			} else {
				count++;
				cntset.insert(arr[j]);
			}
		}

		s.insert(arr[i]);

		ans = max(ans, count);
	}

	//end
	cout << n - ans << endl;

	return 0;
}





1208 B - Uniqueness.cpp GNU C++17 Runtime error on pretest 4

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
bool isOne(map<int,int> hash){
	bool f = true;

	for(auto x:hash){
		if(x.second != 1)
			return false;
	}

	return true;
}

signed main() {
    
// 	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin>>n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}

	map<int,int> hash;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		hash[arr[i]]++;
	}

	int i=0, j=0;

	int req = 50000;
	std::vector<int> vec;
	while(i<n and j<n){

		if(hash[arr[j]]>1){


			hash[arr[j]]--;
			// cout << arr[j] << " " << hash[arr[j]]<< endl;
			j++;
			// req = max(req, j - i );
			
			


		}else if(hash[arr[j]] == 1){
			if(isOne(hash))
				vec.push_back(j-i);
			
			hash[arr[i]]++;
			i++;

		}


	}

	cout << *min_element(vec.begin(), vec.end()) <<endl;
 	
 	

	return 0;
}




