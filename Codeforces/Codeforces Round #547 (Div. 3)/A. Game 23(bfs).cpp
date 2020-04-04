//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India
//God is Great
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

struct node {
    int val;
    int level;
};

int bfs(int n, int y) {

    bool found = false;
    set<int> visit;
    node t;
    t = {n, 0};

    queue<node> q;
    q.push(t);
    visit.insert(t.val);


    while (!q.empty()) {

        node x = q.front();
        q.pop();

        if (x.val == y) {
            found = true;
            return x.level;
        }
        int twice = x.val * 2;
        int thrice = x.val * 3;

        if (twice <= y and visit.find(twice) == visit.end()) {

            node temp;
            temp.val = twice;
            temp.level = x.level + 1;

            q.push(temp);
            visit.insert(twice);
        }

        if (thrice <= y and visit.find(thrice) == visit.end()) {

            node temp;
            temp.val = thrice;
            temp.level = x.level + 1;
            q.push(temp);
            visit.insert(thrice);
        }



    }

    if (!found) return -1;

}

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    crap;

    int n, m;
    cin >> n >> m;

    int ans = bfs(n, m);

    cout << ans << endl;


    return 0;

}

