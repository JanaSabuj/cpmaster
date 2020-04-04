//greenindia-27/12/2018-00:56-Thu
 #include <bits/stdc++.h>
using namespace std;

  int main() {
	// your code goes here
	
	long long int t;
	cin>>t;
	
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int sum=0;
	    std::vector<long long int> vec ;
	    for (long long int i = 0; i < n; i++) {
	        /* code */
	        long long int x;cin>>x;
	        vec.push_back(x);
	        sum+=x;
	    }
	    
	    sort(vec.begin(), vec.end());
	    long long int sumk=0;
	    k= min(k,n-k);
	    
	    for (long long int i = 0; i < k; i++) {
	        /* code */
	        sumk+=vec[i];
	    }
	    
	    long long int y;
	    y=abs(sum-2*sumk);
	    std::cout << y << std::endl;
	    
	    
	}
	
	 	
	return 0;
}
