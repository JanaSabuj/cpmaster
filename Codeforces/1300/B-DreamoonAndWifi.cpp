 //Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	string s1,s2;
	cin>>s1>>s2;
	
	int sz1=s1.length();
	int sz2=s2.length();
	int val=0;
	for(int i=0; i<sz1; i++){
		if(s1[i]=='+')
			val++;
		else
			val--;
	}
                  
     //~ cout<<val;
     int ans=0,question=0;
     for(int i=0; i<sz2; i++){
		 if(s2[i]=='+')
			ans++;
		else if(s2[i]=='-')
			ans--;
		else {
			question++;
		}
		 		 
	 }
	 //~ cout<<(1<<question);
	 vector<int> vec;
	 for(int mask=0; mask<(1<<question); mask++){
		 
		 int ass=0;
		 for(int i=0; i<question; i++){
			 
			 if(mask & (1<<i))
				ass++;
			else
				ass--;
			 
		 }
		 
		 vec.push_back(ass);
	 }
     
     for(auto &x:vec)
		x+=ans;
		
     int den=vec.size();
     int num=count(vec.begin(),vec.end(),val);
     cout<<fixed<<showpoint<<setprecision(12)<< (float) num/den<<endl;
        
    return 0;
 }

