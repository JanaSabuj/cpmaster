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

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

struct trieNode{
	trieNode* child[26];
};

void add(trieNode* root, string word){
	trieNode* curr = root;
	for(auto c: word){
		int x = c - 'a';
		if(curr->child[x] == NULL)
			curr->child[x] = new trieNode();
		curr = curr->child[x];
	}
}

void preorder(trieNode* root, int& ans){
	if(root == NULL)
		return;
	ans++;
	for(int i = 0; i < 26; i++)
		preorder(root->child[i], ans);

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	crap;

	int t;
	cin>>t;

	trieNode* root = new trieNode();
	while(t--){
		string str;
		cin>>str;
		add(root, str);
	}

	int ans = 0;
	preorder(root, ans);
	cout << ans << endl;
	return 0;
}




