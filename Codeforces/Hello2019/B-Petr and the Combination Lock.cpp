//Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>
using namespace std;
void fileio(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr);}

int main() {
    fileio();
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;

int n;
cin>>n;

int arr[n+1];
int sum=0;

for(int i=0; i<n; i++){
    cin>>arr[i];
    sum+=arr[i];

}

if(sum%360==0){
    cout<<"YES";
    return 0;
}

bool flag=false;
for(int mask=1; mask<=pow(2,n)-1; mask++){
 int ass=0;
    for(int i=0; i<n; i++){

        if(mask & (1<<i)) ass+=arr[i];
        else
            ass-=arr[i];

    }
    if(ass%360==0)
    {
        cout<<"YES";
        flag=true;
        break;

    }

}

    if(!flag)
        cout<<"NO";


    return 0;
}
