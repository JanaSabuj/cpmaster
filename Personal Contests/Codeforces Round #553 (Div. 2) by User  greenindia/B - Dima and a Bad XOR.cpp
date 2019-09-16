
1151 B - Dima and a Bad XOR.cpp GNU C++17 Wrong answer on test 18
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
 
    
const int N = 1e5 + 5;
signed main()
{   
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);

    crap;
    int n, m;
    cin >> n >> m;
    int arr[n+1][m+1], harry[n+1][m+1];
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=m ; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i=0 ; i<=m ; i++)
        harry[0][i] = 0;
    for (int i=0 ; i<=n ; i++)
        harry[i][0] = 0;
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=m ; j++)
        {
            harry[i][j] = max(harry[i][j-1], harry[i-1][1] ^ arr[i][j]);
        }
    }
    int ans = harry[n][m], i = n, j = m;
    vector<int> v;
    while(i>0)
    {
        if (harry[i][j] == harry[i-1][1] ^ arr[i][j])
            i--, v.push_back(j), j = 1;
        else if (harry[i][j] == harry[i][j-1])
            j--;
    }
    if (ans <= 0) cout << "NIE" << endl;
    else
    {
        cout << "TAK" << endl;
        reverse(v.begin(), v.end());
        for (auto &i:v)
            cout << i << ' ' ;
        cout << endl;
    }
    return 0;
}