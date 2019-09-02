// By greenindia, contest: Codeforces Round #146 (Div. 2), problem: (A) Boy or Girl, Accepted, #
 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	string str;
	cin>>str;
	int count=0;
	
	for(int i=0;i<str.length();i++){
		
		bool appears = false;
		
		for(int j=0;j<i;j++){
			
			if(str[j]==str[i]){
				
				appears=true;
				break;
				
				
			}
			
			
		}
		
		if(!appears){
			count++;
		}
	 	
	}
	
	
	if(count%2==0)
		cout<<"CHAT WITH HER!"<<"\n";
		else
			cout<<"IGNORE HIM!"<<"\n";
	
	
	
	return 0;
}