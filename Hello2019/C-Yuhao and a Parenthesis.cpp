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

vector<int> gcj;

for(int i=0; i<n; i++){
    string s;
    cin>>s;
    int sz=s.length();
    int l=0, r=0;

    for(int v=0; v<sz; v++){
        if(s[v]=='(') l++;
        else
            r++;
    }

    int bal=0;
    for(int x=0; x<sz; x++){
        if(s[x]=='(') bal++;
        else {
            if(bal>0){
                l--;
                r--;
                bal--;
            }
        }
    }

    if(l>0 and r>0) continue;
    else gcj.push_back(r-l);

}

sort(gcj.begin(), gcj.end());

int gcjsz=gcj.size();

int i=0; int j=gcjsz-1;
int anspairs=0;

while (i<j){
    if(gcj[i]+gcj[j]==0) {anspairs++;i++;j--;}
    else if(gcj[i]+gcj[j]>0) j--;
    else i++;
}

 cout<<anspairs<<endl;
    return 0;
}
