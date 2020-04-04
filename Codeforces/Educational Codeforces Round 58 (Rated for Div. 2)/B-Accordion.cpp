 //Built by Sabuj Jana(greenindia) from Jadavpur University

#include <bits/stdc++.h>
using namespace std;
void fileio(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr);}

void rem(string &s , const string &c) {
    auto pos=s.find(c);
    if(pos==string::npos){
        cout<<-1<<endl;
        exit(0);
    }
    s.erase(0,pos+1);

}


int main() {
    fileio();
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;
    string s;
    cin>>s;

    rem(s,"[");
    rem(s,":");
    reverse(s.begin(),s.end());
    rem(s,"]");
    rem(s,":");


    int x;
    x = count(s.begin(), s.end(), '|');
    cout<<x+4<<endl;

    return 0;
}
