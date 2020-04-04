
1197 B - Pillars.cpp GNU C++17 Accepted

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
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {
    
// 	freopen("input.txt", "r", stdin);
	crap;
 	 
        int n;
        cin>>n;

        int ARR[n];
        for (int i = 0; i < n; ++i)
        {
        	/* code */
        	cin>>ARR[i];
        }
     
        if(n==1){
            cout<<"Yes";
            return 0;
        }   
        int i=1;
        
        while(i<n and (ARR[i]>ARR[i-1])){
            i++;
            
        }
     
        while(i<n and (ARR[i]<ARR[i-1])){
            i++;
            
        }
     
        if(i==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
     
     
     
        return 0;
}





1197 B - Pillars.cpp GNU C++17 Wrong answer on test 6

// C++ program to check if an array is bitonic 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if the given array is bitonic 
int checkBitonic(int arr[], int n) 
{ 
    int i, j; 
  
    // Check for increasing sequence 
    for (i = 1; i < n; i++) { 
        if (arr[i] > arr[i - 1]) 
            continue; 
  
        if (arr[i] <= arr[i - 1]) 
            break; 
    } 
  
    if (i == n - 1) 
        return 1; 
  
    // Check for decreasing sequence 
    for (j = i + 1; j < n; j++) { 
        if (arr[j] < arr[j - 1]) 
            continue; 
  
        if (arr[j] >= arr[j - 1]) 
            break; 
    } 
  
    i = j; 
  
    if (i != n) 
        return 0; 
  
    return 1; 
} 
  
// Driver code 
int main() 
{   
    // freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>arr[i];
    }
   
  
    (checkBitonic(arr, n) == 1) ? cout << "YES"<<endl
                                : cout << "NO" <<endl; 
  
    return 0; 
} 
1197 B - Pillars.cpp GNU C++17 Wrong answer on test 4

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
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {
    
// 	freopen("input.txt", "r", stdin);
	crap;

	int n;
	cin>>n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}

	std::vector<int> vec;

	int i=0,j=n-1;
	int count=0;
	while(i<=j){
		if(!(count&1)){
			vec.push_back(arr[i]);
			i++;
			count++;
		}else{
			vec.push_back(arr[j]);
			j--;
			count++;
		}

	}

	sort(arr,arr+n);

	bool isGood = true;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(arr[i] !=vec[i]){
			isGood = false;
			break;
		}

	}

	// for(auto x:vec)
	// 	cout<<x<<" ";

	if(isGood)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
 	
 	

	return 0;
}




