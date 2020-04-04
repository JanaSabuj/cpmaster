 //KMP ALgorithm- Sabuj Jana-@greenindia-Jadavpur University
#include <bits/stdc++.h> 
using namespace std;

void computeLPSArray(string pat, long long int M, long long int* lps); 

 
void KMPSearch( std::string pat ) 
{ 
	long long int M =  pat.length(); 
// 	long long int N =  txt.length(); 

long long int flag=0;
	 
	long long int lps[M]; 

 
	computeLPSArray( pat, M, lps); 

// 	long long int i = 0; // index for txt[] 
// 	long long int j = 0; // index for pat[] 
// 	while (i < N) { 
// 		if (pat[j] == txt[i]) { 
// 			j++; 
// 			i++; 
// 		} 

// 		if (j == M) { 
// // 			prlong long intf("Found pattern at index %d ", i - j); 
//             std::cout <<  i-j <<std::endl;
// 			j = lps[j - 1]; 
// 			flag++;
// 		} 

	 
// 		else if (i < N && pat[j] != txt[i]) { 
// 			// Do not match lps[0..lps[j-1]] characters, 
// 			// they will match anyway 
// 			if (j != 0) 
// 				j = lps[j - 1]; 
// 			else
// 				i = i + 1; 
// 		} 
// 	} 
// 	if(flag==0)
// 	    cout<<endl ;

        for (int i = 0; i < M; i++) {
            /* code */cout<<lps[i]<<" ";
        }
	
} 

 
void computeLPSArray( std::string pat, long long int M, long long int* lps) 
{ 
	// length of the previous longest prefix suffix 
	long long int len = 0; 

	lps[0] = 0;  
	 
	long long int i = 1; 
	while (i < M) { 
		if (pat[i] == pat[len]) { 
			len++; 
			lps[i] = len; 
			i++; 
		} 
		else // (pat[i] != pat[len]) 
		{ 
			 
			if (len != 0) { 
				len = lps[len - 1]; 

			 
			} 
			else // if (len == 0) 
			{ 
				lps[i] = 0; 
				i++; 
			} 
		} 
	} 
} 

// Driver program   
 int main() 
{   
    
    
    //  long long int n;
    // cin>>n;
    
    while(1){
         
         string pat;
         cin>>pat;
         
         if(pat=="End"){
            //  std::cout << "FUCK" << std::endl;
             	break;
         }
         else
            	KMPSearch(pat); 
    //      txt  = "ABACABAB"; 
	   //  pat  = "AB"; 
	   //cin>>pat ;

    }
   
	return 0; 
} 