
/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}

class trie {
public:
	trie* left;
	trie* right;
};

void insert(int n, trie* head) {

	trie* curr = head;
	for (int i = 31; i >= 0; i--) {
		int b = (n >> i) & 1;

		if (b == 0) {
			// go left
			if (!curr->left)
				curr->left = new trie();
			curr = curr->left;
		}
		else {
			//go right
			if (!curr-> right)
				curr->right = new trie();
			curr = curr->right;
		}
	}

}

int query(trie* head, int x) {

	 
		int val = x;
		trie* curr = head;

		int cur_xor = 0;

		for (int j = 31; j >= 0; j--) {
			int b = (val >> j) & 1;

			if (b == 0) {
				//go right
				if (curr->right) {
					cur_xor += pow(2, j);
					curr = curr-> right;
				}
				else {
					curr = curr-> left;
				}
			}

			else {
				if (curr->left) {
					cur_xor += pow(2, j);
					curr = curr-> left;
				}
				else
					curr = curr-> right;
			}
		}

		return cur_xor;
}

signed main() {

	// freopen("input.txt", "r", stdin);
	crap;

	int arr[] = {8, 1, 2, 12, 7, 6};
	trie* head = new trie();
	int pre_xor = 0;
	int req = LLONG_MIN;

	for (int i = 0; i < 6; ++i)
	{
		/* code */
		pre_xor = pre_xor ^ arr[i];
		insert(pre_xor, head);

		req = max(req, query( head , pre_xor));

	}

	// cout << query(head, arr, 4);
	cout << req << endl;

	return 0;
}




