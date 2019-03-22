//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
//God is Great 
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define endl "\n"
 #define int long long int 
 #define double long double
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 #define MAX 100007
   	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;

    int n,m;
    cin>>n>>m;

    if(m%n!=0) {cout<<-1<<endl; return 0;}
    else{

    	int d=m/n;
    	int cnt=0;
    	while(d%2==0){
    		d/=2;cnt++;
    	}

    	while(d%3==0){
    		d/=3;cnt++;
    	}

    	if(d==1) cout<<cnt<<endl;
    	else
    		cout<<-1<<endl;
 
    }
                  
     
    return 0;
    
 }

