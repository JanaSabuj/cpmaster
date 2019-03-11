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

    int n,k;
    cin>>n>>k;

    int freq[101]={0};

    for(int i=0; i<n; i++){

    	int x;cin>>x;
    	freq[x%k]++;
    }

    int cnt=0;
    cnt+=freq[0]/2;

    if(k%2==0){
    	cnt+= freq[k/2]/2;
    	freq[k/2]=0;
    }



    for(int i=1; i<=k/2; i++){

    	cnt+= min( freq[i], freq[k-i]);


    }

    cout<<cnt*2<<endl;

                  
     
    return 0;
    
 }

