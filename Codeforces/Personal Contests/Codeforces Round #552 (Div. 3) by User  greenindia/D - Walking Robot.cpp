
1154 D - Walking Robot.cpp GNU C++17 Accepted
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define dbg(x) cerr << #x << " = " << x << endl
 #define endl "\n"
 #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 //const int INF=1e9+5;//billion
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int n,bat,maxacc;
    cin>>n>>bat>>maxacc;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>arr[i];
    }

    int acc=maxacc;
    int seg=0;

    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	if(arr[i]==0){

    		if(acc){
    			acc--;
                seg++;
    		}
    		else if(bat){
    			bat--;
    			seg++;
    		}
    		else{
    			cout<<seg<<endl;
    			return 0;
    		}
    	}
    	else{
    		if(bat and (acc+1)<=maxacc){
    			bat--;
    			acc++;
    			seg++;
    			 
    		}
    		else if(acc){
    			acc--;
    			seg++;
    		}
    		else{
    			cout<<seg<<endl;
    			return 0;
    		}
    	}
    }

    cout<<seg<<endl;
                  
     
    return 0;   
 }


1154 D - Walking Robot.cpp GNU C++17 Wrong answer on test 6
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define dbg(x) cerr << #x << " = " << x << endl
 #define endl "\n"
 #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 //const int INF=1e9+5;//billion
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int n,bat,maxacc;
    cin>>n>>bat>>maxacc;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>arr[i];
    }

    int acc=maxacc;
    int seg=0;

    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	if(arr[i]==0){

    		if(acc){
    			acc--;
                seg++;
    		}
    		else if(bat){
    			bat--;
    			seg++;
    		}
    		else{
    			cout<<seg<<endl;
    			return 0;
    		}
    	}
    	else{
    		if(bat){
    			bat--;
    			acc++;
    			seg++;
    			if(acc>maxacc)
    				acc=maxacc;
    		}
    		else if(acc){
    			acc--;
    			seg++;
    		}
    		else{
    			cout<<seg<<endl;
    			return 0;
    		}
    	}
    }

    cout<<seg<<endl;
                  
     
    return 0;   
 }


1154 D - Walking Robot.cpp GNU C++17 Accepted
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define dbg(x) cerr << #x << " = " << x << endl
 #define endl "\n"
 #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 //const int INF=1e9+5;//billion
 string alpha="abcdefghijklmnopqrstuvwxyz";
 /*----------JU IS LOVE----------*/
 //int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
 //int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}
   	 	 
 signed main() {
  
    crap;

    int n,a,b;
	cin>>n>>a>>b;
	int s=0;
	int mia=b;
	while (n--)
	{
		if(!a && !b) break;


		/*****HELLO MIA***/////
		int f;
		cin>>f;
		if (f)
		{
			if(a>0 && b<mia){
				b++;
				a--;
				}
		  else b--;
		}
		else 
		{
			if (b>0) b--;
			else a--;
		}
		s++;	
	}
	cout<<s;
                  
     
    return 0;   
 }

