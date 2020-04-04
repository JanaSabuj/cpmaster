
1140 C - Playlist.cpp GNU C++17 Wrong answer on test 3
#include<bits/stdc++.h>
using namespace std;
struct song {
    int l, b;
};

bool sort_b(song b, song a) {
    if (b.b > a.b)return 1;
    if ((b.b == a.b) && (b.l > a.l))return 1;
    return 0;
}
int main() {
     
    int n, k;
    long long last = 0, ans, l;
    song s[300000];
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &s[i].l, &s[i].b);
    sort(s, s + n, sort_b);
    l = 0;
    int b=INT_MAX;
    ans = 0;
   
    for (int i = 0; i < k; i++) {
        l += s[i].l;
        // b=min(b,s[i].b);
        last = l * s[i].b;
        // cout<<last<<endl;
        ans = max(ans, last);
    }
    printf("%lld", ans);
    //  sort(s,s+n,sort_l);

}