#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int n,m,k;
	for(int i = 0; i<T; i++){
	    cin>>n>>m>>k;
	    if(n+k > m)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	}
	return 0;
}
