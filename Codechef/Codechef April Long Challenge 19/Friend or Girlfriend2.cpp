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
   	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;

    int t;
    cin>>t;

    while(t--){

    	int n;
    	cin>>n;

    	string str;char c;
    	cin>>str>>c;

    	std::vector<int> v;

    	int len=0;

    	for(int i=0; i<str.length(); i++){

    		if(str[i]!=c)
    			len++;
    		else {
    			v.pb(len);
    			len=0;
    		}
    	}

    	if(len>=0)
    		v.pb(len);

    	int ans=0;
    	for(auto x:v){
    		ans+= x*(x+1)/2;

    	}

    	int total= n*(n+1)/2;
    	cout<<total-ans<<endl;


    }
                  
     
    return 0;   
 }

