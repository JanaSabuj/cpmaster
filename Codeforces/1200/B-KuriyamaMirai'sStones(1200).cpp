//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 using ll=long long ;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	int n;cin>>n;
	ll arr[n+7],A[n+7];
	arr[0]=0;
	A[0]=0;
	
	for(int i=1; i<=n; i++){
		
		cin>>arr[i];
		A[i]=arr[i];
	}
    
    sort(A,A+n+1);
     
    
    ll dparr[n+7],dpA[n+7];
    dparr[0]=0;
    dpA[0]=0;
    for(int i=1; i<=n; i++){
		
		dparr[i]=dparr[i-1]+arr[i];
		dpA[i]=dpA[i-1]+A[i];
	}
     
    int m; cin>>m;
    while(m--){
		
		ll type,l,r;
		cin>>type>>l>>r;
		if(type==1){
			
			ll ans= dparr[r]-dparr[l-1];
			cout<<ans<<endl;
			
		}
		else {
			
			ll ans= dpA[r]-dpA[l-1];
			cout<<ans<<endl;
			
		}
		
	}
       
     
    return 0;
 }

