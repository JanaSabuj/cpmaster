
1141 B - Maximal Continuous Rest.cpp GNU C++17 Accepted
//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
//God is Great 
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define endl "\n"
 #define int long long int 
 #define double long double
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 #define MAX 100007
   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;
     int arr[n];
     for (int i = 0; i < n; ++i)
     {
     	/* code */
     	cin>>arr[i];	
     }

     int ans=0,count=0;

     for (int i = 0; i < 2*n; ++i)
     {
     	/* code */
     	if(arr[i%n]==1){
     		count++;
     		ans=max(ans,count);
     	}
     	else {
     		
     		count=0;
     	}

     }

     cout<<ans<<endl;
                  
     
    return 0;
    
 }


1141 B - Maximal Continuous Rest.cpp GNU C++17 Accepted
//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India
//God is Great
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define endl "\n"
#define int long long int
#define double long double
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair
#define PI acos(-1)

#define MAX 100007

signed main() {
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	freopen("error.txt", "w", stderr);
	crap;

	int n;
	cin >> n;

	int vec[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> vec[i];
	}

	vector<int> arr;
	for (int i = 0; i < n; i++) {
		arr.pb(vec[i]);
	}
	for (int i = 0; i < n; i++) {
		arr.pb(vec[i]);
	}

	int ans = 0, count = 0, start = 0, end = 0, s = 0;

	for (int i = 0; i < 2 * n; ++i)
	{
		/* code */
		if (arr[i] == 1) {
			count++;
			if (count > ans)
			{	start = s;
				end = i;
			}

		}
		else {
			ans = max(ans, count);
			count = 0;
			s = i + 1;
		}
	}

	ans = max(ans, count);




	cout << ans << endl;

	return 0;

}

