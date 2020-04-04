
1199 C - MP3.cpp GNU C++17 Wrong answer on test 11
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
    
// 	freopen("input.txt", "r", stdin);
	crap;
 
	int n,I;
	cin>>n>>I;
 
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
 
	int power ;
	if( (8*I)%n == 0) {
 
		power = (8*I)/n;
	}
	else {
		power = (8*I)/n;
	}
	// cout<<power<<endl;
	if(power>20){
		 power=20;
	}
	int k = pow(2, power);
 
 
 
	// cout<<k<<" "<<endl;
 
	map<int,int> hash;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		hash[arr[i]]++;
	}
 
	// for(auto x:hash){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }
 
	int siz = hash.size();
	// cout<<siz<<endl;
 
 
 
	if(siz<=k or siz==1){
		cout<<0<<endl;
		return 0;
	}
 
	int del = abs(k - siz);
 
	vector<int> vec;
 
	for(auto x: hash){
		vec.push_back(x.second);
	}
 
	sort(vec.begin(), vec.end());
 
	int ans=0;
	for(int i=0; i<del; i++){
		ans+=vec[i];
	}
 
	cout<<ans<<endl;
 	
 	
 
	return 0;
}
1199 C - MP3.cpp GNU C++17 Compilation error
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
    
// 	freopen("input.txt", "r", stdin);
	crap;
 
	int n,I;
	cin>>n>>I;
 
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
 
	int power ;
	if( (8*I)%n == 0) {
 
		power = (8*I)/n;
	}
	else {
		power = (8*I)/n;
	} 
	int k = pow(2, min(power,20));
 
 
 
	// cout<<k<<" "<<endl;
 
	map<int,int> hash;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		hash[arr[i]]++;
	}
 
	// for(auto x:hash){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }
 
	int siz = hash.size();
	// cout<<siz<<endl;
 
 
 
	if(siz<=k or siz==1){
		cout<<0<<endl;
		return 0;
	}
 
	int del = abs(k - siz);
 
	vector<int> vec;
 
	for(auto x: hash){
		vec.push_back(x.second);
	}
 
	sort(vec.begin(), vec.end());
 
	int ans=0;
	for(int i=0; i<del; i++){
		ans+=vec[i];
	}
 
	cout<<ans<<endl;
 	
 	
 
	return 0;
}
1199 C - MP3.cpp GNU C++17 Wrong answer on pretest 11

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
    
// 	freopen("input.txt", "r", stdin);
	crap;

	int n,I;
	cin>>n>>I;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}

	int power ;
	if( (8*I)%n == 0) {

		power = (8*I)/n;
	}
	else {
		power = (8*I)/n;
	}
	// cout<<power<<endl;
	if(power>20){
		cout<<0<<endl;
		return 0;
	}
	int k = pow(2, power);



	// cout<<k<<" "<<endl;

	map<int,int> hash;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		hash[arr[i]]++;
	}

	// for(auto x:hash){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }

	int siz = hash.size();
	// cout<<siz<<endl;



	if(siz<=k or siz==1){
		cout<<0<<endl;
		return 0;
	}

	int del = abs(k - siz);

	vector<int> vec;

	for(auto x: hash){
		vec.push_back(x.second);
	}

	sort(vec.begin(), vec.end());

	int ans=0;
	for(int i=0; i<del; i++){
		ans+=vec[i];
	}

	cout<<ans<<endl;
 	
 	

	return 0;
}





1199 C - MP3.cpp GNU C++17 Wrong answer on pretest 11

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
    
// 	freopen("input.txt", "r", stdin);
	crap;

	int n,I;
	cin>>n>>I;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}

	int power ;
	if( (8*I)%n == 0) {

		power = (8*I)/n;
	}
	else {
		power = (8*I)/n;
	}
	// cout<<power<<endl;
	int k = pow(2, power);



	// cout<<k<<" "<<endl;

	map<int,int> hash;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		hash[arr[i]]++;
	}

	// for(auto x:hash){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }

	int siz = hash.size();
	// cout<<siz<<endl;



	if(siz<=k or siz==1){
		cout<<0<<endl;
		return 0;
	}

	int del = abs(k - siz);

	vector<int> vec;

	for(auto x: hash){
		vec.push_back(x.second);
	}

	sort(vec.begin(), vec.end());

	int ans=0;
	for(int i=0; i<del; i++){
		ans+=vec[i];
	}

	cout<<ans<<endl;
 	
 	

	return 0;
}





1199 C - MP3.cpp GNU C++17 Wrong answer on pretest 11

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

	int n,I;
	cin>>n>>I;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}

	int power = (8*I)/n;
	int k = pow(2, power);

	// cout<<k<<" "<<endl;

	map<int,int> hash;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		hash[arr[i]]++;
	}

	// for(auto x:hash){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }

	int siz = hash.size();
	// cout<<siz<<endl;

	if(siz<=k){
		cout<<0<<endl;
		return 0;
	}

	int del = abs(k - siz);

	vector<int> vec;

	for(auto x: hash){
		vec.push_back(x.second);
	}

	sort(vec.begin(), vec.end());

	int ans=0;
	for(int i=0; i<del; i++){
		ans+=vec[i];
	}

	cout<<ans<<endl;
 	
 	

	return 0;
}




