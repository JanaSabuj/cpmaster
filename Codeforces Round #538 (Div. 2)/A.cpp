//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	int x,y,z;
	cin>>x>>y>>z;
	
	int a,b,c;
	cin>>a>>b>>c;
	
	 
	a=a-x;
	if(a>=0){
		
		int total=a+b;
		total=total-y;
		if(total>=0){
			
			int x= total+c;
			x=x-z;
				if(x>=0)
					{cout<<"YES"; return 0;}
			
			
		}
		
	}
                  
     cout<<"NO"<<endl;
     
    return 0;
 }

