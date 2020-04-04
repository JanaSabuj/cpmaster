//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great------------/////\\\\--------------------------------
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n"
 #define int long long int 
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
  
  
 typedef vector<int> vi;

 int lexcheck(vi pos, vi neg){


 	int len1= pos.size();
 	int len2=neg.size();

 	int len=min(len1,len2);

 	for (int i = 0; i < len; ++i)
 	{
 		/* code */
 		if(pos[i]==neg[i])
 			continue;
 		else if(pos[i]>neg[i])
 			return 1;//first
 		else 
 			return 2;//second
 	}

 	if(len1>len2)
 		return 1;
 	else if(len2>len1)
 		return 2;
 	else
 		return 0;//equally lexicographic
 }
 	 
 signed main() {
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 	freopen("error.txt", "w", stderr);
    crap;
    
    int n;
    cin>>n;

    vi pos, neg;
    string win;
    int psum=0,nsum=0;
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	int x;cin>>x;
    	if(x>0)
    		{pos.pb(x); psum+=x;}
    	else if(x<0)
    		{neg.pb(-x);

    			nsum+=(-x);
    		}
    	if(i==n-1)
    	{
    		if(x<0)
    			win="second";
    		else
    			win="first";
    	}

    }

    // cerr<<nsum;

    // winning cases
    //1.
    if(psum>nsum)
    {
    	cout<<"first"<<endl;
    	return 0;
    }

    else if (nsum>psum){
    	cout<<"second"<<endl;
    	return 0;
    }

    //2. 
    else {

    	int ans= lexcheck(pos,neg);
    	if(ans==1)
    		{ cout<<"first"<<endl;
    	return 0;}
    	else if(ans==2){
    		cout<<"second"<<endl;
    	return 0;
    	}
    	else if(ans==0){
    		cout<<win<<endl;
    	}


    }



     
    return 0;
    
 }