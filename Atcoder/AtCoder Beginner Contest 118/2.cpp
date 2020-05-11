//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 #define INF LLONG_MAX
 #define pb push_back
 #define mp make_pair
 typedef vector<int> vi;
 typedef long long ll;
 
 	 
 int main() {
 	freopen("input.txt", "r", stdin);
    crap;
                  
     int n,m;
     cin>>n>>m;
     
     int arr[m+1];
     memset(arr,0,sizeof(arr));
     int total=n;
     while(n--){
		 
		 int x;cin>>x;
		 while(x--){
			 
			 int y;cin>>y;
			 arr[y]++;
			 
		 }
		 
	 }
		 int cnt=0;
		 for(int i=1; i<=m; i++){
			 
			 //~ if(arr[i]==n)
				//~ cnt++;
			//~ cout<<arr[i]; 
			if(arr[i]==total)
				cnt++;
		 }
		 
		 cout<<cnt<<endl;
	       
      
    return 0;
 }

