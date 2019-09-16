
1141 A - Game 23.cpp GNU C++17 Accepted
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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    crap;

    int n, m;
    cin >> n >> m;

    int ans = bfs(n, m);

    cout << ans << endl;


    return 0;

}


1141 A - Game 23.cpp GNU C++17 Accepted
//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
//God is Great 
 #include <bits/stdc++.h>
 using namespace std;
 #define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 //cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
 #define endl "\n"
 #define int long long int 
 #define double long double
 const int INF=1e9+5;//billion
 #define pb push_back
 #define mp make_pair
 #define PI acos(-1)
 
 #define MAX 100007
   	 
 signed main() {
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	freopen("error.txt", "w", stderr);
    crap;

    int n,m;
    cin>>n>>m;

    if(m%n!=0) {cout<<-1<<endl; return 0;}
    else{

    	int d=m/n;
    	int cnt=0;
    	while(d%2==0){
    		d/=2;cnt++;
    	}

    	while(d%3==0){
    		d/=3;cnt++;
    	}

    	if(d==1) cout<<cnt<<endl;
    	else
    		cout<<-1<<endl;
 
    }
                  
     
    return 0;
    
 }


1141 A - Game 23.cpp GNU C++17 Accepted
// C++ program to find minimum number of steps needed 
// to covert a number x into y with two operations 
// allowed : (1) multiplication with 2 (2) subtraction 
// with 1. 
#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
// A node of BFS traversal 
struct node 
{ 
    int val; 
    int level; 
}; 
  bool flag=false;
// Returns minimum number of operations 
// needed to covert x into y using BFS 
int minOperations(int x, int y) 
{ 
    // To keep track of visited numbers 
    // in BFS. 
    set<int> visit; 
  
    // Create a queue and enqueue x into it. 
    queue<node> q; 
    node n = {x, 0}; 
    q.push(n); 
  
  
    // Do BFS starting from x 
    while (!q.empty()) 
    { 
        // Remove an item from queue 
        node t = q.front(); 
        q.pop(); 
  
        // If the removed item is target 
        // number y, return its level 
        if (t.val == y) {
            flag=true;
            return t.level; 
        }
  
        // Mark dequeued number as visited 
        visit.insert(t.val); 
  
        // If we can reach y in one more step 
        if (t.val*2 == y || t.val*3 == y) {
            flag=true;
            return t.level+1; 
        }
  
        // Insert children of t if not visited 
        // already 
        if (t.val*2<y and visit.find(t.val*2) == visit.end()) 
        { 
            n.val = t.val*2; 
            n.level = t.level+1; 
            q.push(n); 
        } 
        if (t.val*3 <y  && visit.find(t.val*3) == visit.end()) 
        { 
            n.val = t.val*3; 
            n.level = t.level+1; 
            q.push(n); 
        } 
    } 
} 
  
// Driver code 
signed main() 
{ 

    
    int n,m;
    cin>>n>>m;

    int ans=minOperations(n,m);

    if(flag==true)
        cout << ans; 
    else
        cout<<-1;
    return 0; 
} 