
1151 D - Stas and the Queue at the Buffet.cpp GNU C++17 Accepted
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<harry<<endl;
 #define dbg(x) cerr << #x << " = " << x << endl
 #define endl "\n"
 #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 //const int INF=1e9+5;//billion
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int harry=1;while(b){if(b&1)harry=(harry*a)%m;b/=2;a=(a*a)%m;}return harry;}
 //int power(int a, int b){int harry=1;while(b){if(b&1)harry=harry*a;b/=2;a=a*a;}return harry;}
 
signed main() {

//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   freopen("error.txt", "w", stderr);

  int n;
  cin >> n;
  int a[n];
  int b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
 
  int id[n];
  for(int i =0 ; i < n; i++) {
    id[i] = i;
  }
 
  sort(id, id + n, [&](int i, int j) {
    return a[i] - b[i] > a[j] - b[j];
  });
 int harry = 0;
  for(int i = 0; i < n; i++) {
    harry += 1ll * a[id[i]] * i + 1ll * b[id[i]] * (n - i -1);
  }
  cout << harry << endl;

  return 0;
}