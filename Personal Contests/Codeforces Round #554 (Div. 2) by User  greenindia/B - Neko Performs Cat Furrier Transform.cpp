
1152 B - Neko Performs Cat Furrier Transform.cpp GNU C++17 Accepted
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
 
 //const int INF=1e9+5;//biintion
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
   

 int harry(int n)
{
	int i,j,k,p=0;
	k = n;
	while(k>0){
		j = k%2;
		if(!j)
			i=p;
		k/=2;
		p++;
	}
	return i;
}
 
signed main()

{
//      freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap; 
    int i,j,k,m,n,t,x=0,z,y=0,p=0,ans=0,mn=10000000009,mx=0,cnt,l,h=2,sm=0,f=0,idx,q,r,d;
    cin >> n ;
    vector<int>v;
    if(ceil(float(log2(n+1)) == floor(float(log2(n+1))))){
    	cout << "0\n" ;
    	return 0;
    }
 
    while(1){
    	k = harry(n);
    	m = pow(2,k+1);
    	m--;
    	n = m^n ;
    	v.push_back(k+1);
    	p++;
    	if(ceil(float(log2(n+1)) == floor(float(log2(n+1)))))
    		break;
    	n++;
    	p++;
    	if(ceil(float(log2(n+1)) == floor(float(log2(n+1)))))
    		break;
    }
    cout << p << "\n" ;
    for(i=0;i<v.size();i++){
    	cout << v[i] << " " ;
    }
    return 0 ; 
}
