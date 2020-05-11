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
                  
     int A,B;
     cin>>A>>B;
     
     if(B%A==0)
		cout<<A+B;
	else
		cout<<B-A;
     
      
    return 0;
 }

