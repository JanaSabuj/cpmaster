// By greenindia, contest: Codeforces Beta Round #1, problem: (A) Theatre Square, Accepted, #
 #include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	//cout<<"GfG!";
	
	long long int n,m,a;
	
	cin>>n>>m>>a;
	
	long long int x= (n+a-1)/a;
	long long int y= (m+a-1)/a;
	
	std::cout << x*y << std::endl;
	
	
	
	return 0;
}