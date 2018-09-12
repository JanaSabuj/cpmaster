 // By greenindia, contest: Codeforces Beta Round #54 (Div. 2), problem: (A) Chat room, Accepted, #
 #include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	string text;
	cin>>text;
	
	int l=text.length();
	
	int i=0;
	int flag=0;
	int pos1,pos2,pos3,pos4,pos5;
	
	while(i<l)
	{
		if(text[i]=='h')
			{pos1=i;
			flag++;
			break;
				
			}
			
		i++;	
	}
	
	// cout<<flag<<endl;
	i++;
	
	if(flag>0) {
		while(i>pos1 && i<l)
	{
		if(text[i]=='e')
		{	pos2=i;
			flag++;
			break;
			
		}
		i++;	
	}
	
	
	}
	
	// cout<<flag<<endl;
	i++;
		if(flag>1) {
		while(i>pos2 && i<l)
	{
		if(text[i]=='l')
		{	pos3=i;
			flag++;
			break;
			
		}
		i++;	
	}
	
	}
	
	// cout<<flag<<endl;
	i++;
		if(flag>2) {
		while(i>pos3 && i<l)
	{
		if(text[i]=='l')
		{	pos4=i;
			flag++;
			break;
			
		}
		i++;	
	}
	
	}
	
	// cout<<flag<<endl;
	i++;
	
		if(flag>3) {
		while(i>pos4 && i<l)
	{
		if(text[i]=='o')
		{	pos5=i;
			flag++;
			break;
			
		}
		i++;	
	}
	
	}
	
	
	
	// cout<<flag<<endl;
	// cout<<pos1<<endl<<pos2<<endl<<pos3<<endl<<pos4<<endl<<pos5<<endl;
	if(flag==5)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
	
	
	
	return 0;
}