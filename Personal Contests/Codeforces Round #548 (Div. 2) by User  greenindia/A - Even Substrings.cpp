
1139 A - Even Substrings.cpp GNU C++17 Accepted
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define endl "\n"
 #define int long long int 
 #define double long double
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 const int INF=1e9+5;//billion
 #define MAX 100007
 string alpha="abcdefghijklmnopqrstuvwxyz";
   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;

    string str;
    cin>>str;

     
    int cnt=0;

    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	int x= str[i]-'0';
    	if( ! (x & 1))
    		cnt+=(i+1);
    }

    cout<<cnt<<endl;
                  
     
    return 0;   
 }


1139 A - Even Substrings.cpp GNU C++17 Accepted
#include<bits/stdc++.h> 
using namespace std; 
  
// Return the even number substrings. 
int evenNumSubstring(char str[]) 
{ 
    int len = strlen(str); 
    int count = 0; 
  
    for (int i = 0; i < len; i++) 
    { 
        int temp = str[i] - '0'; 
   
        if (temp % 2 == 0) 
            count += (i + 1); 
    } 
  
    return count; 
} 
  
// Driven Program 
int main() 
{ 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    cout << evenNumSubstring(str) << endl; 
    return 0; 
} 