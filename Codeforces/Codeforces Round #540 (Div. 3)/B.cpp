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
                  
      int n;
      cin>>n;
      
      int arr[n+7];
      int dp[n+7];
      arr[0]=0;
      dp[0]=0;
      int evensum=0,oddsum=0;
      for(int i=1; i<=n; i++){
		  
		  cin>>arr[i];
		  if(i%2==0)
			{evensum+=arr[i]; dp[i]=evensum;}
		else
			{oddsum+=arr[i]; dp[i]=oddsum;}
			 
		  
	  }
	  
	   
	  
	  int evenmax=0,oddmax=0;
	  if(n%2==0)
		{ evenmax=dp[n]; oddmax=dp[n-1];}
	  else
		{ oddmax=dp[n]; evenmax=dp[n-1];}
		
 
	  
	  int cnt=0;
	  
	  for(int i=1; i<=n; i++){
		  
		  int valeven=0,valodd=0;
		  
		  if(i%2==0){
			  //start from 2
			  valeven+=dp[i-2];
			  valodd+= dp[i-1];
			  
			  valeven+= ( oddmax- valodd );
			  valodd+= ( evenmax- dp[i] );
			  
			  if(valeven == valodd)
				{ cnt++;
					 //~ cout<<i<<" ";
					  }
			  
		  }
		  
		  else {
			  
			  //start from 1
			  valeven+=dp[i-1];
			  if( i==1)
				valodd+= 0;
			else
				valodd+= dp[i-2];
			  
			  valeven+= ( oddmax- dp[i] );
			  valodd+= ( evenmax- dp[i-1] );
			  
			  if(valeven == valodd)
				 {cnt++; 
					 //~ cout<<i<<" ";
					 }
			  
		  }
		  
		  
	  }
     
     cout<<cnt<<endl;
     //~ cout<<endl;
      
    return 0;
 }

