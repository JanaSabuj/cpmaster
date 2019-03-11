//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
//God is Great 
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 #define int long long int 
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
   
 typedef vector<int> vi;
 	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;
 	
 	int h1,h2,m1,m2;
 	char c1,c2;

 	cin>>h1>>c1>>m1;
 	cin>>h2>>c2>>m2;

 	int total1= h1*60+ m1;
 	int total2= h2*60+m2;
 	int ans= (total1+total2)/2;

 	h1= ans/60;
 	m1=ans%60;
 	 


 	if(h1<10)
 		cout<<0<<h1;
 	else
 		cout<<h1;

 	cout<<":";

 	if(m1<10)
 		cout<<0<<m1;
 	else
 		cout<<m1;
     
    return 0;
    
 }

