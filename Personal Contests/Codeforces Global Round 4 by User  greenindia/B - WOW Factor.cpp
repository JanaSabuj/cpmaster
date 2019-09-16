
1178 B - WOW Factor.cpp GNU C++17 Accepted

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
 	
 	string str;
 	cin>>str;

 	 int a=0, b=0,ans=0;

 	 for (int i = 0; i < str.length(); ++i)
 	 {
 	 	/* code */
 	 	if(str[i] == 'o'){
 	 		b+=a;

 	 	}else if(str[i] == 'v' and str[i+1] == 'v'){
 	 		a++;
 	 		ans += b;
 	 	}
 	 }

 	 cout<<ans<<endl;

	return 0;
}





1178 B - WOW Factor.cpp GNU C++17 Time limit exceeded on test 10
// A Dynamic Programming based C++ program to find the 
// number of times the second string occurs in the first 
// string, whether continuous or discontinuous 
#include <iostream> 
using namespace std; 
 
//////SABUJ JANA SABUJ
  
// Iterative DP function to find the number of times 
// the second string occurs in the first string, 
// whether continuous or discontinuous 
int count(string a, string b) 
{ 
    int m = a.length(); 
    int n = b.length(); 
  
    // Create a table to store results of sub-problems 
    int lookup[m + 1][n + 1] = { { 0 } }; 
  
    // If first string is empty 
    for (int i = 0; i <= n; ++i) 
        lookup[0][i] = 0; 
  
    // If second string is empty 
    for (int i = 0; i <= m; ++i) 
        lookup[i][0] = 1; 
  
    // Fill lookup[][] in bottom up manner 
    for (int i = 1; i <= m; i++) 
    { 
        for (int j = 1; j <= n; j++) 
        { 
            // If last characters are same, we have two  
            // options - 
            // 1. consider last characters of both strings 
            //    in solution 
            // 2. ignore last character of first string 
            if (a[i - 1] == b[j - 1]) 
                lookup[i][j] = lookup[i - 1][j - 1] +  
                               lookup[i - 1][j]; 
                  
            else
                // If last character are different, ignore 
                // last character of first string 
                lookup[i][j] = lookup[i - 1][j]; 
        } 
    } 
  
    return lookup[m][n]; 
} 
  
// Driver code 
int main() 
{ 
    string str;
	cin >> str;
 
	string temp = "";
 
	for (int i = 0; i < str.length(); ++i)
	{
		/* code */
		if( i == str.length() - 1)
		    temp = temp + str[i];
		else if (str[i] == 'v' and str[i + 1] == 'v')
			temp  = temp + 'w';
		else
			temp = temp + str[i];
	}
 
	// cout<<temp;
 
	string key = "wow";
	cout << count(temp, key) << endl;
  
    return 0; 
}
1178 B - WOW Factor.cpp GNU C++17 Accepted

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

//const int INF=1e9+5;//biintion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

#define M 3000000

int LEFT[M];
int RIGHT[M];
int t[M]; 
int sum[M]; 

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	string str;
	cin >> str;

	int n, m, k, l, r, nb, q;
	n = str.length();
	int cnt = 0;
	int cnt1 = 0;

	for (int i = 0; i < n; i++)
		if (str[i] == 'v')
			cnt++;

	for (int i = 1; i < n; i++)
	{
		if ((str[i] == 'v') && (str[i - 1] == 'v'))
			t[i]++;
	}
	LEFT[0] = t[0];
	RIGHT[n - 1] = t[n - 1];
	for (int i = 0; i < n - 1; i++)
		LEFT[i] = LEFT[i - 1] + t[i];
	for (int i = n - 1; i >= 0; i--)
		RIGHT[i] = RIGHT[i + 1] + t[i];
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'o')
			ans += LEFT[i] * RIGHT[i];
	}
	cout << ans << endl;


	return 0;
}





1178 B - WOW Factor.cpp GNU C++17 Time limit exceeded on pretest 10
// A Dynamic Programming based C++ program to find the 
// number of times the second string occurs in the first 
// string, whether continuous or discontinuous 
#include <iostream> 
using namespace std; 

//////SABUJ JANA SABUJ
  
// Iterative DP function to find the number of times 
// the second string occurs in the first string, 
// whether continuous or discontinuous 
int count(string a, string b) 
{ 
    int m = a.length(); 
    int n = b.length(); 
  
    // Create a table to store results of sub-problems 
    int lookup[m + 1][n + 1] = { { 0 } }; 
  
    // If first string is empty 
    for (int i = 0; i <= n; ++i) 
        lookup[0][i] = 0; 
  
    // If second string is empty 
    for (int i = 0; i <= m; ++i) 
        lookup[i][0] = 1; 
  
    // Fill lookup[][] in bottom up manner 
    for (int i = 1; i <= m; i++) 
    { 
        for (int j = 1; j <= n; j++) 
        { 
            // If last characters are same, we have two  
            // options - 
            // 1. consider last characters of both strings 
            //    in solution 
            // 2. ignore last character of first string 
            if (a[i - 1] == b[j - 1]) 
                lookup[i][j] = lookup[i - 1][j - 1] +  
                               lookup[i - 1][j]; 
                  
            else
                // If last character are different, ignore 
                // last character of first string 
                lookup[i][j] = lookup[i - 1][j]; 
        } 
    } 
  
    return lookup[m][n]; 
} 
  
// Driver code 
int main() 
{ 
    string str;
	cin >> str;

	string temp = "";

	for (int i = 0; i < str.length() - 1; ++i)
	{
		/* code */
		if (str[i] == 'v' and str[i + 1] == 'v')
			temp  = temp + 'w';
		else
			temp = temp + str[i];
	}

	// cout<<temp;

	string key = "wow";
	cout << count(temp, key) << endl;
  
    return 0; 
}
1178 B - WOW Factor.cpp GNU C++17 Time limit exceeded on pretest 10

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
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

int count(string a, string b)
{
	int m = a.length();
	int n = b.length();

	// Create a table to store results of sub-problems
	int lookup[m + 1][n + 1] = { { 0 } };

	// If first string is empty
	for (int i = 0; i <= n; ++i)
		lookup[0][i] = 0;

	// If second string is empty
	for (int i = 0; i <= m; ++i)
		lookup[i][0] = 1;

	// Fill lookup[][] in bottom up manner
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			// If last characters are same, we have two
			// options -
			// 1. consider last characters of both strings
			//    in solution
			// 2. ignore last character of first string
			if (a[i - 1] == b[j - 1])
				lookup[i][j] = lookup[i - 1][j - 1] +
				               lookup[i - 1][j];

			else
				// If last character are different, ignore
				// last character of first string
				lookup[i][j] = lookup[i - 1][j];
		}
	}

	return lookup[m][n];
}

int count1(string X, string Y, int m, int n)
{
	// T[i][j] stores number of of times the pattern Y[0..j)
	// appears in given string X[0..i) as a subsequence
	int T[m + 1][n + 1];

	// if pattern Y is empty, we have found subsequence
	for (int i = 0; i <= m; i++)
		T[i][0] = 1;

	// if input string X is empty
	for (int j = 1; j <= n; j++)
		T[0][j] = 0;

	// if current character of both string and pattern matches,
	// 1. exclude current character in both string and pattern
	// 2. exclude only current character in the string

	// else if current character of string and pattern do not match,
	// exclude current character in the string
	
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			T[i][j] = ((X[i-1] == Y[j-1]) ? T[i-1][j-1] : 0) +
						T[i-1][j];

	// return last entry in lookup table
	return T[m][n];
}

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	string str;
	cin >> str;

	string temp = "";

	for (int i = 0; i < str.length() - 1; ++i)
	{
		/* code */
		if (str[i] == 'v' and str[i + 1] == 'v')
			temp  = temp + 'w';
		else
			temp = temp + str[i];
	}

	// cout<<temp;

	string key = "wow";
	// cout << count(temp, key) << endl;
	cout << count1(temp, key, temp.size(), key.size()) << endl;



	return 0;
}





1178 B - WOW Factor.cpp GNU C++17 Time limit exceeded on pretest 10

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
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

int count(string a, string b)
{
	int m = a.length();
	int n = b.length();

	// Create a table to store results of sub-problems
	int lookup[m + 1][n + 1] = { { 0 } };

	// If first string is empty
	for (int i = 0; i <= n; ++i)
		lookup[0][i] = 0;

	// If second string is empty
	for (int i = 0; i <= m; ++i)
		lookup[i][0] = 1;

	// Fill lookup[][] in bottom up manner
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			// If last characters are same, we have two
			// options -
			// 1. consider last characters of both strings
			//    in solution
			// 2. ignore last character of first string
			if (a[i - 1] == b[j - 1])
				lookup[i][j] = lookup[i - 1][j - 1] +
				               lookup[i - 1][j];

			else
				// If last character are different, ignore
				// last character of first string
				lookup[i][j] = lookup[i - 1][j];
		}
	}

	return lookup[m][n];
}

signed main() {

// 	freopen("input.txt", "r", stdin);
	crap;

	string str;
	cin >> str;

	string temp = "";

	for (int i = 0; i < str.length() - 1; ++i)
	{
		/* code */
		if (str[i] == 'v' and str[i + 1] == 'v')
			temp  = temp + 'w';
		else
			temp = temp + str[i];
	}

	// cout<<temp;

	string key = "wow";
	cout << count(temp, key) << endl;



	return 0;
}




