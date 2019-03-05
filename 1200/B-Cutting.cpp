//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 #define INF LLONG_MAX
 #define pb push_back
 #define mp make_pair
 #define loop(i,a,b) for(int i=a;i<b;i++)
 #define loopr(i,a,b) for(int i=a;i>=b;i--)
 #define loopm(i,a,b,step) for(int i=a;i<b;i+=step)
 #define looprm(i,a,b,step) for(int i=a;i>=b;i-=step)
 #define all(v) (v).begin(), (v).end()
 typedef vector<int> vi;
 typedef long long ll;
 
 	 
 int main() {
 	freopen("input.txt", "r", stdin);
    crap;
                  
    int n,b;
    cin>>n>>b;
    
    int arr[n+7];
     vector<int> v;
     
     int odd=0,even=0;
     loop(i,0,n){
		 
		 cin>>arr[i];
		 
	 }
	 
	 loop(i,0,n){
		  
			
			if(arr[i]&1)
			odd++;
		else
			even++;
		 
		 if(odd==even and i!=0 and i!=n-1)
			v.pb( abs(arr[i]-arr[i+1]));;
		 
		 
	 }
     
    sort(all(v));
     
     int cnt=0;
     for(auto x:v) {
		if((b-x)>=0)
			{b-=x;
			cnt++;}
		else
			break;
	}		
	cout<<cnt<<endl;		
	
	
			
    return 0;
 }

