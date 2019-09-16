
1151 A - Maxim and Biology.cpp GNU C++17 Accepted
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
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
         
 signed main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    crap;
  int n,i;
    string s;
    cin>>n;
    cin>>s;
      int mini = INT_MAX;
    int t;
    for(i=0;i<=n-4;i++){


      int sum = 0;
      t = abs(s[i] - 'A');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+1] - 'C');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+2] - 'T');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+3] - 'G');
      t = min(26-t,t);
      sum+=t;
      if(sum<mini){
        mini = sum;
      }
    }
    cout<<mini<<endl;

    return 0;
}
1151 A - Maxim and Biology.cpp GNU C++17 Skipped
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/


#include <bits/stdc++.h>
 
using namespace std;
/** TOURIST SUCKS ******/
// head
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef long double ld;
#define mp make_pair
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n,i;
    string s;
    cin>>n;
    cin>>s;
    long long int mini = INT_MAX;
    long long int t;
    for(i=0;i<=n-4;i++){
      long long int sum = 0;
      t = abs(s[i] - 'A');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+1] - 'C');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+2] - 'T');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+3] - 'G');
      t = min(26-t,t);
      sum+=t;
      if(sum<mini){
        mini = sum;
      }
    }
    cout<<mini<<endl;
}
 
1151 A - Maxim and Biology.cpp GNU C++17 Wrong answer on pretest 1
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
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;
  int n,i;
    string s;
    cin>>n;
    cin>>s;
      int mini = INT_MAX;
    int t;
    for(i=0;i<=n-4;i++){


      int sum = 0;
      t = abs(s[i] - 'A');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+1] - 'C');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+2] - 'T');
      t = min(26-t,t);
      sum+=t;
      t = abs(s[i+3] - 'G');
      t = min(26-t,t);
      sum+=t;
      if(sum<mini){
        mini = sum;
      }
    }
    cout<<mini<<endl;

    return 0;
}
 
   
1151 A - Maxim and Biology.cpp GNU C++17 Wrong answer on pretest 1
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
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;

  
     int n,i;
    string s;
    cin>>n;
    
    
    //hel//
    cin>>s;
     int mini = INT_MAX;
 
     
    int t;
    for(i=0;i<=n-4;i++){
        int total = 0;
      t = abs(s[i] - 'A');
      t = min(26-t,t);
      
      total+=t;
      t = abs(s[i+1] - 'C');
      t = min(26-t,t);
      total+=t;
      t = abs(s[i+2] - 'T');
      t = min(26-t,t);
      total+=t;
      t = abs(s[i+3] - 'G');
      t = min(26-t,t);
      total+=t;
      if(total<mini){
        mini = total;
      }
    }
    
    
    
    cout<<mini<<endl;

    return 0; 
}
 
   