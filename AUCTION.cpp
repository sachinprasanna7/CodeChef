#include <iostream>
using namespace std;

int main() {
    int T,A,B,C;
    cin>>T;
    while(T--){
        cin>>A>>B>>C;
        if(A >B && A > C) cout<<"Alice"<<endl;
        else if( B > A && B > C) cout<<"Bob"<<endl;
        else cout<<"Charlie"<<endl;
    }
	return 0;
}
