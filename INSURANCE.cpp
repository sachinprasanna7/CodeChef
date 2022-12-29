#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int x,y;
	for(int i = 0; i<T; i++){
	    cin>>x>>y;
	    if(x<=y)
	        cout<<x<<endl;
	    else
	        cout<<y<<endl;
	}
	return 0;
}
