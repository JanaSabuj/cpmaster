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

    int b,k;
    cin>>b>>k;

    bool flag= true; //even

    int dig[k];int sum=0;
    for (int i = 0; i < k; ++i)
    {
    	/* code */
    	cin>>dig[i];
    	sum+=dig[i];
    }

    //case 1- even base
    if( ! (b&1)){

    	if(dig[k-1] & 1)
    		flag=false;
    	else
    		flag=true;

    }

//case 2- odd base 
    else {
    	if(sum & 1)
    		flag=false;
    	else
    		flag=true;


    }

     if(flag)
     	cout<<"even"<<endl;
     else
     	cout<<"odd"<<endl;

                  
     
    return 0;   
 }

