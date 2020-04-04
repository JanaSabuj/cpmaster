 #include <bits/stdc++.h>
using namespace std;

const int MAXN= 33;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	
	
	while(t--)
	{
	    int D;
	    cin>>D;
	    
	    int arr[MAXN];
	    
	    memset(arr, 0 , sizeof(arr));
	    
	    for (int i = 0; i < D; i++) {
	        /* code */
	        
	        int x,y;
	        cin>>x>>y;
	        
	        arr[x]=y;
	        
	        
	    }
	    
	    
	    
	    for (int i = 1; i < MAXN; i++) {
	        /* code */
	        arr[i]+=arr[i-1];
	        
	    }
	    
	    
	    int Q;
	    cin>>Q;
	    
	    while(Q--)
	    {
	        int dead,req;
	        cin>>dead>>req;
	        
	        if(arr[dead]>=req)
	            std::cout << "Go Camp" << std::endl;
	       else
	        std::cout << "Go Sleep" << std::endl;
	    }
	    
	}
	 
	return 0;
}