#include <iostream>
using namespace std;

int main() {
	int T,X;
	cin>>T;
	while(T--){
	    cin>>X;
	    if (X<4)
	        cout<<"MILD\n";
	    else if (X>=4 && X<7)
	        cout<<"MEDIUM\n";
	    else
	        cout<<"HOT\n";
	    
	}
	return 0;
}
