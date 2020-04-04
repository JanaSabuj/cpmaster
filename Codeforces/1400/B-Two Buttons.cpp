  #include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int x,y;
    cin>>x>>y;
    int ans=0;
    while(y>x){
            if(y&1){
                y++;
                ans++;
            }
            y/=2;
            ans++;
    }
    ans+=x-y;
    cout<<ans<<endl;
    return 0;

}