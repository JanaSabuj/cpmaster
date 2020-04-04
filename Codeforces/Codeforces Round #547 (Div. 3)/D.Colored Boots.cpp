/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
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
 string alpha="abcdefghijklmnopqrstuvwxyz";
 string alphaq="abcdefghijklmnopqrstuvwxyz?";
   	 
 signed main() {
 	// freopen("input.txt", "r", stdin);
 	// freopen("output.txt", "w", stdout);
 	// freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;

    string str1,str2;
    cin>>str1>>str2;

    vector<pair<int,int>> ans;

    map<char, vector<int>> left,right;

    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	left[str1[i]].pb(i);
    }
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	right[str2[i]].pb(i);
    }

    for(auto c: alpha){

    	while(!left[c].empty() and !right[c].empty()){

    		int x= left[c][left[c].size()-1];
    		int y=right[c][right[c].size()-1];
    		ans.pb({x,y});
    		left[c].pop_back();
    		right[c].pop_back();

    	}
    }


    for(auto c:alpha){

    	 while(!left['?'].empty() and !right[c].empty()){

    	 	int x= left['?'][left['?'].size()-1];
    		int y=right[c][right[c].size()-1];
    		ans.pb({x,y});
    		left['?'].pop_back();
    		right[c].pop_back();
    	 }

    }
   
   for(auto c:alphaq){

    	 while(!left[c].empty() and !right['?'].empty()){

    	 	int x= left[c][left[c].size()-1];
    		int y=right['?'][right['?'].size()-1];
    		ans.pb({x,y});
    		left[c].pop_back();
    		right['?'].pop_back();
    	 }

    }
   
   
    int cnt=ans.size();
    cout<<cnt<<endl;

    for(auto x:ans){
    	cout<<x.first+1<<" "<<x.second+1<<endl;
    }




                  
     
    return 0;
    
 }

