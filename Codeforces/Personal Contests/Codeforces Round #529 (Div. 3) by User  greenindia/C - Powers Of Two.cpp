
1095 C - Powers Of Two.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
// 	cout<<"GfG!";
std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

int n,k;
cin>>n>>k;
int bits[32];
priority_queue<int> pq;
int n2;
n2=n;

int ones=0;
for (int i = 0; i < 32; i++) {
    /* code */
    bits[i]=n&1;
    n>>=1;
    if(bits[i]==1)
        {
            ones++;
            pq.push(1<<i);
            
        }
         
}

// cout<<ones;
// n=n2;

if( k<ones || k>n2)
{
    std::cout << "NO" << std::endl;
    return 0;
}


k-=ones;

while(k--)
{
    int x;
    x=pq.top();
    pq.pop();
    pq.push(x>>1);
    pq.push(x>>1);
    
}

std::cout << "YES" << std::endl;

while(!pq.empty())
{
    std::cout << pq.top() <<" ";
    pq.pop();
}


	return 0;
}
1095 C - Powers Of Two.cpp GNU C++17 Time limit exceeded on test 3
#include <bits/stdc++.h>
using namespace std;

int main() {
// 	cout<<"GfG!";
std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

int n,k;
cin>>n>>k;
int bits[32];
priority_queue<int> pq;
int n2;
n2=n;

int ones=0;
for (int i = 0; i < 32; i++) {
    /* code */
    bits[i]=n&1;
    n>>=1;
    if(bits[i]==1)
        {
            ones++;
            pq.push(1<<i);
            
        }
         
}

// cout<<ones;
n=n2;

if(k<ones || k>n)
{
    std::cout << "NO" << std::endl;
}


k-=ones;

while(k--)
{
    int x;
    x=pq.top();
    pq.pop();
    pq.push(x>>1);
    pq.push(x>>1);
    
}

std::cout << "YES" << std::endl;

while(!pq.empty())
{
    std::cout << pq.top() <<" ";
    pq.pop();
}


	return 0;
}
1095 C - Powers Of Two.cpp GNU C++17 Time limit exceeded on test 3
#include <bits/stdc++.h>
using namespace std;

int main() {
// 	cout<<"GfG!";
std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

int n,k;
cin>>n>>k;
int bits[32];
priority_queue<int> pq;
int n2;
n2=n;

int ones=0;
for (int i = 0; i < 32; i++) {
    /* code */
    bits[i]=n&1;
    n>>=1;
    if(bits[i]==1)
        {
            ones++;
            pq.push(1<<i);
            
        }
        
        
     
}

// cout<<ones;
n=n2;

if(k<ones || k>n)
{
    std::cout << "NO" << std::endl;
}


k-=ones;

while(k--)
{
    int x;
    x=pq.top();
    pq.pop();
    pq.push(x/2);
    pq.push(x/2);
    
}

std::cout << "YES" << std::endl;

while(!pq.empty())
{
    std::cout << pq.top() <<" ";
    pq.pop();
}


	return 0;
}
1095 C - Powers Of Two.cpp GNU C++17 Time limit exceeded on test 3
#include <bits/stdc++.h>
using namespace std;

int main() {
// 	cout<<"GfG!";

int n,k;
cin>>n>>k;
int bits[32];
priority_queue<int> pq;
int n2;
n2=n;

int ones=0;
for (int i = 0; i < 32; i++) {
    /* code */
    bits[i]=n&1;
    n>>=1;
    if(bits[i]==1)
        {
            ones++;
            pq.push(1<<i);
            
        }
        
        
     
}

// cout<<ones;
n=n2;

if(k<ones || k>n)
{
    std::cout << "NO" << std::endl;
}


k-=ones;

while(k--)
{
    int x;
    x=pq.top();
    pq.pop();
    pq.push(x/2);
    pq.push(x/2);
    
}

std::cout << "YES" << std::endl;

while(!pq.empty())
{
    std::cout << pq.top() <<" ";
    pq.pop();
}


	return 0;
}