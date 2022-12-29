#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,X,H;
	cin>>n;
	
	for(int i = 0; i<n; i++){
	    cin>>X>>H;
	    if(X>=H)
	       cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
