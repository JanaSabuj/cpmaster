/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
//
//		  _____       _           _        _
//		 / ____|     | |         (_)      | |
//		| (___   __ _| |__  _   _ _       | | __ _ _ __   __ _
//		 \___ \ / _` | '_ \| | | | |  _   | |/ _` | '_ \ / _` |
//		 ____) | (_| | |_) | |_| | | | |__| | (_| | | | | (_| |
//		|_____/ \__,_|_.__/ \__,_| |  \____/ \__,_|_| |_|\__,_|
//		                        _/ |
//		                       |__/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define int long long int
#define double long double
#define PI acos(-1)
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

struct trie {
	trie* child[10];
	int words;
	int prefixes;
};

bool insert(trie* root, string str) {
	trie* curr = root;
	for (auto c : str) {
		int x = c - '0';
		if (curr ->child[x] == NULL)
			curr->child[x] = new trie();
		curr = curr->child[x];
		curr->prefixes++;
		// check if already a complete (small) word was present till here before
		if (curr->words > 0)
			return false;
	}
	curr->words++;

	// check if this current word is a prefix to another (big) word(> 1) including itself(==1)
	if (curr->prefixes > 1)
		return false;
	return true;
}

void del(trie* root) {
	for (int i = 0; i < 10; i++) {
		if (root->child[i])
			del(root->child[i]);
	}
	delete(root);
}

void solve(int tc) {
	cout << "Case " << tc << ": ";
	int n;
	cin >> n;
	trie* root = new trie();

	bool flag = true;

	while (n--) {
		string str;
		cin >> str;
		if (flag) {
			flag = insert(root, str);
		}
	}

	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	del(root);
}


signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;
	int t;
	cin >> t;
	int tc = 0;
	while (t--) {
		solve(++tc);
	}


	return 0;
}
