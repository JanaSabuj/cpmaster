#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	// your code goes here
	int x;
	float y,money;
	
	cin >> x;
	cin >> y;
	
	if  (y>(x+0.50) && x%5==0)
	    money = (y-(x+0.50));
	else
	    money= y;
	    
	    std::cout << float(money) << std::endl;
	    
	
	
	return 0;
}
