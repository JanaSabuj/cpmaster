 #include <bits/stdc++.h>
using namespace std;

struct segment {
    int l,r,idx;
} ;

bool comp ( segment a, segment b)
{
    return a.l<b.l ;
}

int main() {
    // cout<<"Hello World!";
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        segment arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i].l>>arr[i].r;
            arr[i].idx=i;
        }

        sort(arr, arr+n,comp);

        int flag=0; int end= arr[0].r;
        int ans[n];

        for(int i=0; i<n; i++){
            if(flag==0){
                if(end<arr[i].l) { flag=1; ans[arr[i].idx]=2; continue; }
                ans[arr[i].idx]=1;
                end=max(end,arr[i].r);
            }
            else{
                ans[arr[i].idx]=2 ;
            }

        }

        if(flag==0) cout<<-1;
        else {
            for(int i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}
