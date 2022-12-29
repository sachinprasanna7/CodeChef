#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int num1,num2,num3,num4;
	cin>>num1>>num2>>num3>>num4;
	
	int count = 0;
	if(num1>=10)
	    count++;
	if(num2>=10)
	    count++;
	if(num3>=10)
	    count++;
	if(num4>=10)
	    count++;
	    
	cout<<count;
	   
	return 0;
}
