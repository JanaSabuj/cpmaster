
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

vector<int> findDivisors(int n) {

	std::vector<int> vec;

	for (int i = 1; i * i <= n ; ++i)
	{
		/* code */
		if (n % i == 0) {
			if (n / i == i)
				vec.push_back(i);
			else {
				vec.push_back(i);
				vec.push_back(n / i);
			}
		}
	}

	sort(vec.begin(), vec.end());

	return vec;


}

int sumDig(int n){
	int sum=0;
	while(n>0){
		sum += n%10;
		n/=10;
	}

	return sum;
}

bool compare(pair<int,int> &a, pair<int,int> &b){
	if(a.first != b.first)
		return a.first<b.first;
	else
		return a.second>b.second;
	}


signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin >> n;

	std::vector<int> divisors = findDivisors(n);

	std::vector<pair<int,int>> sumOfDigits;
	std::vector<int> ans;

	for (auto x : divisors) {
		int y = sumDig(x);
		sumOfDigits.push_back({y, x});
	}



	sort(sumOfDigits.begin(), sumOfDigits.end(), compare);
 	
 	// for(auto x : sumOfDigits){
 	// 	cout<<x.first<<" "<<x.second<<endl;
 	// }

 	cout<<sumOfDigits[sumOfDigits.size() - 1].second<<endl;



	return 0;

}




