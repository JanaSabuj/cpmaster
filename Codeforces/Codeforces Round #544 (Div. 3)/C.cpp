//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India
//God is Great
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define int long long int
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair

typedef vector<int> vi;

signed main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	crap;

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}

	sort(arr,arr+n);

	int cnt=0;

	int i=0,j=1;

	while(i<n and j<n){

		if(i==j) {j++; continue;}


		if(arr[j]-arr[i]<=5){

			j++;
			cnt=max(cnt,j-i);
		}

		
		else{
			 
			i++;
		}


	}

	 

	if(cnt==0) cnt=1;
	cout<<cnt<<endl;

	return 0;

}

