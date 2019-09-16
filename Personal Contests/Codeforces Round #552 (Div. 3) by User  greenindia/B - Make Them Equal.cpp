
1154 B - Make Them Equal.cpp GNU C++17 Accepted
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
 string alpha="abcdefghijklpotteropqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
  
    crap;

   int n,I,harry=-100,potter=100001,t;
   cin>>n;
   int a[n];
   for(I=0;I<n;I++)
  {
  cin>>a[I];
  potter=min(potter,a[I]);
  harry= max(harry,a[I]);
}
  t = (potter+harry);
 
 
  if((t)%2==0)
{ 
  for(I=0;I<n;I++)
 {
   if((a[I]!=potter) &&(a[I]!=harry) && (a[I]!=(t)/2))
 { cout<<-1;
   return 0;
 }
 
 }
  cout<< harry- (t)/2;
}
 
else 
{
 
  for(I=0;I<n;I++)
  {
   if((a[I]!=potter )&&( a[I]!=harry) )
  {
   cout<<-1;
   return 0;
  }
 
  }
  cout<< harry- potter;
 
 } 
                  
     
    return 0;   
 }

