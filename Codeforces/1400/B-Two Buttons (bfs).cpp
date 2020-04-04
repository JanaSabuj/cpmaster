  //Built by Sabuj Jana(greenindia) from Jadavpur University
 
#include <bits/stdc++.h>
 
using namespace std;
 
struct node {
    int val;
    int level;
};
 
 
int bfs(int x , int y) {
    bool visit[30000];
    node n = {x , 0};
    queue<node> q;
    q.push(n);
 
    while (!q.empty()) {
 
        node temp = q.front();
        q.pop();
        if (temp.val == y)
            return temp.level;
 
//        visit.insert(temp.val);
        visit[temp.val] = true;
 
 
 
        if (!visit[temp.val * 2] and temp.val * 2 <=10007) {
            if ((temp.val) * 2 == y )
                    return temp.level + 1;
            n.val = temp.val * 2;
            n.level = temp.level + 1;
            q.push(n);
        }
 
 
        if (!visit[temp.val - 1] and temp.val-1 >= 1) {
            if ((temp.val) - 1 == y)
                return temp.level + 1;
            n.val = temp.val - 1;
            n.level = temp.level+1;
            q.push(n);
        }
 
    }
    return 0;
}
 
 
int main() {
    // fileio();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    int t;cin>>t;cout<<t;cerr<<t;
 
    int x , y;
    cin >> x >> y;
    // if(x > y) cout<<x-y<<endl; 
    // else {
    	int ans = bfs(x , y);
        cout << ans << endl;
    // }
    return 0;
}