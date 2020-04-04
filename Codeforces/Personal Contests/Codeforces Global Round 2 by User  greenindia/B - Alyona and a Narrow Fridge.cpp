
1119 B - Alyona and a Narrow Fridge.cpp GNU C++17 Accepted
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
 
 const int INF=1e9+5;//billion
 #define MAX 100007
 string alpha="abcdefghijklmnopqrstuvwxyz";
//power (a^b)%m
 int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
int a[1000], b[1000];
signed main() {
// 	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
long long n, h, i, k, l=0, p=0;
cin >> n >> h;
for (i=0; i<n; i++)
{
	cin >> a[i];
	b[i]=a[i];
}
k=n;
while (l==0)
{
	p=0;
	sort (b, b+k);
	for (i=k; i>=0; i--)
	{
		if (i%2!=k%2)
		{
			p+=b[i];
		}
	}
	if (p<=h)
	{
		cout << k;
		l++;
	}
	else
	{
		k--;
		for (i=0; i<k; i++)
		{
			b[i]=a[i];
		}
	}
}
	return 0;
}