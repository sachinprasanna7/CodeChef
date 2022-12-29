#include <iostream>
using namespace std;


void Rainfall(int x){
    if(x<3)
        cout<<"LIGHT\n";
    else if (x>=3 && x<7)
        cout<<"MODERATE\n";
    else
        cout<<"HEAVY\n";
}
int main() {
	int T,X;
	cin>>T;
	for(int i = 0; i < T; i++){
	    cin>>X;
	    Rainfall(X);
	}
	return 0;
}
