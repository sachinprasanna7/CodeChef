#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,time_taken;
	cin>>n;
	
	for(int i =0 ; i<n ; i++){
	    cin>>time_taken;
	    if(time_taken >= 30)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
