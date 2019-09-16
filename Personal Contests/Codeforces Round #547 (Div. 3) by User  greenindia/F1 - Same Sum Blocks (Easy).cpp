
1141 F1 - Same Sum Blocks (Easy).cpp GNU C++17 Accepted
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
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair
#define PI acos(-1)

#define MAX 100007

signed main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>arr[i];
    }

    map<int, vector<pair<int,int>>> seg;
    //sorted by end points
    for (int j = 0; j < n; ++j)
    {
        /* code */
        int sum=0;
        for(int i=j; i>=0; i--){
            sum+=arr[i];
            seg[sum].pb({i,j});
        }
    }

    int maxcnt=LLONG_MIN;
    vector<pair<int,int>> ans;
    for(auto row:seg){

        vector<pair<int,int>> vec=row.second;
        vector<pair<int,int>> temp;
        int cnt=0,l=-1;
        for(auto x:vec){
            if(x.first>l){
                cnt++;
                l=x.second;
                temp.pb({x.first,x.second});
            }
        }

        if(cnt>maxcnt){
            maxcnt=cnt;
            ans=temp;
        }


    }

    cout<<maxcnt<<endl;
    for(auto x:ans){
        cout<<x.first+1<<" "<<x.second+1<<endl;
    }


    return 0;

}


1141 F1 - Same Sum Blocks (Easy).cpp GNU C++17 Wrong answer on test 11
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
const int INF = 1e9 + 5; //billion
#define pb push_back
#define mp make_pair
#define PI acos(-1)

#define MAX 100007

signed main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    crap;

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>arr[i];
    }
    map<int, vector<pair<int,int>>> seg;
    for (int i = 0; i < n; ++i)
    {
        /* code */
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            seg[sum].pb({i,j});
        }
    }

    int maxcnt=LLONG_MIN;
    vector<pair<int,int>> ans;
    for(auto row:seg){

        vector<pair<int,int>> vec=row.second;
        vector<pair<int,int>> temp;
        int cnt=0,l=-1;
        for(auto x:vec){
            if(x.first>l){
                cnt++;
                l=x.second;
                temp.pb({x.first,x.second});
            }
        }

        if(cnt>maxcnt){
            maxcnt=cnt;
            ans=temp;
        }


    }

    cout<<maxcnt<<endl;
    for(auto x:ans){
        cout<<x.first+1<<" "<<x.second+1<<endl;
    }


    return 0;

}

