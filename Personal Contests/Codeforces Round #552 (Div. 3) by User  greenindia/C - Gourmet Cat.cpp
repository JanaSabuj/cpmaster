
1154 C - Gourmet Cat.cpp GNU C++17 Accepted
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
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

signed main() {
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	freopen("error.txt", "w", stderr);
	crap;

	int arr[3];

	for (int i = 0; i < 3; ++i)
	{
		/* code */
		cin >> arr[i];
	}

	int week[] = {0, 1, 2, 0, 2, 1, 0};


	int full = min(arr[0] / 3, min(arr[1] / 2, arr[2] / 2));

	arr[0] -= full * 3;
	arr[1] -= full * 2;
	arr[2] -= full * 2;

	int total = LLONG_MIN;

	for (int start = 0; start < 7; start++) {

		int ans = 0;

		int b[3];
		copy(arr, arr + 3, b );

		int day = start;
 

		while (b[week[day]]) {
			ans++;
			b[week[day]]--;
			day = (day + 1) % 7;
 
		}


		total = max(total, full * 7 + ans);



	}

	cout << total << endl;


	return 0;
}


1154 C - Gourmet Cat.cpp GNU C++17 Accepted
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

 bool toomuch(char c, int& a, int& b, int& c1) {
	if(c == 'F' && a > 0) {
		a--;
		return true;
	}
	if(c == 'R' && b > 0) {
		b--;
		return true;
	}
 
	if(c == 'C' && c1 > 0) {
		c1--;
		return true;
	}
 
	return false;
}
 
   	 	 
 signed main() {
  
    crap;

    int a,b,c;
	cin >> a >> b >> c;
 
	 int food = 0;
 
	while(a >= 3 && b >= 2 && c >= 2) {
		food += 7;
		a -= 3;
		b -= 2;
		c -= 2;
	}
 
	vector<char> johny(7);
	johny[0] = 'F';
	johny[1] = 'R';
	johny[2] = 'C';
	johny[3] = 'F';
	johny[4] = 'C';
	johny[5] = 'R';
	johny[6] = 'F';
   int ans = 0;
 
	for(int i = 0; i < 7; i++) {
		int a1 = a;
		int b1 = b;
		int c1 = c;
		if(toomuch(johny[i], a1, b1, c1)) {
			int j = i+1;
			if(j == 7) j = 0;
			  int c = 1;
			while(j != i) {
				if(!toomuch(johny[j], a1, b1, c1)) break;
				j++;
				if(j == 7) j = 0;
				c++;
			}
			ans = max(ans, c);
		}
	}
 
	cout<<food+ans<<endl;
	return 0;

    
                  
     
    return 0;   
 }

