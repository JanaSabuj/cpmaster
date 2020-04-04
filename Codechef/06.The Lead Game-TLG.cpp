 #include <bits/stdc++.h>
using namespace std;

int main() {
//  cout<<"GfG!";

int t,player1,player2,lead,m,n,winner,leadplayer;

cin>>t;

player1=player2=0;
int maxlead=0;


while(t--) {
    cin>>m>>n;
    
    player1+=m;
    player2+=n;
    
    lead= player1-player2;
    
    leadplayer=1;
    
    if(lead<0) {
        leadplayer=2;
        lead*=-1;
    }
    
    if (lead>maxlead) {
        maxlead=lead;
        winner=leadplayer;
    }
    
     
}
    cout<<winner<<" "<<maxlead;
    return 0;
}