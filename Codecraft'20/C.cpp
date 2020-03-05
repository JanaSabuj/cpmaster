By greenindia, contest: CodeCraft-20 (Div. 2), problem: (C) Primitive Primes, Accepted, #, Copy
/*-------------------------------@greenindia-Sabuj-Jana----------------------------------*/
 
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int main() {
// 	freopen("input.txt", "r", stdin);
	crap;
	int n, m, p;
	cin >> n >> m >> p;
 
	int A[n];
	int indexA = 0;// smallest coefficient of A that ND by p . 0 is excluded in this question
	bool flag = true;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> A[i];
		if (flag)
			if (A[i] % p != 0) {
				indexA = i;
				flag = false;
			}
	}
 
	int B[m];
	int indexB = 0;
	flag = true;
 
	for (int j = 0; j < m; j++) {
		cin >> B[j];
		if (flag)
			if (B[j] % p != 0) {
				indexB = j;
				flag = false;
			}
	}
 
 
	int finalIndex = indexA + indexB;// also power is the same
	cout << finalIndex << endl;
 
	return 0;
}
