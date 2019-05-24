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
    
    int k;
    cin>>k;
    
    int n,m;
    bool flag=false;
    for (int i = 1; i*i<=k; i++) {
        /* code */
        if(k%i==0){
            if(i>=5 and k/i>=5){
                n=i;
                m=k/i;
                flag=true;
                break;
            }
        }
    }
    
    if(!flag){
        cout<<-1<<endl;
        return 0;
    }
    
    
    string vowel="aeiou";
    string ans="";
    
    for (int i = 0; i < n; i++) {
        /* code */
        for(int j=0; j<m; j++){
            ans+=vowel[(i+j)%5];
        }
        
         
    }

    
   cout<<ans<<endl;               
     
    return 0;   
 }

