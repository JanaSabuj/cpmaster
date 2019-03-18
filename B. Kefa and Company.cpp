//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
//God is Great 
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define endl "\n"
 #define int long long int 
 #define double long double
 const int INF=1e9+107;//billion
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
   	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;

    int n,d;
    cin>>n>>d;
    int m=n;
    vector<pair<int,int>> vec;
    while(m--){

    	int x,y;
    	cin>>x>>y;

    	vec.pb({x,y});
 
    	//end
    }
    
    sort(vec.begin(),vec.end());


    int global=-1,cur=0;

   
    int j=0;
    for(int i=0; i<n; i++){

    	while(j<n and vec[j].first-vec[i].first<d){
    		cur+=vec[j].second;
    		j++;
    	}

    	global=max(global,cur);  
    	cur-=vec[i].second;
    	 

    }
     

    cout<<global<<endl;
     
    return 0;
    
 }

