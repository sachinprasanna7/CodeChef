#include <iostream>
using namespace std;

bool Solve(int n1, int n2, int n3, int n4){
    
    int ans = 0;
    
    if(n3 == n1 || n4 == n1) ans++;
    if(n4 == n2 || n3 == n2) ans++;
    
    if(ans == 2) return true;
    
    return false;
}

int main() {
	int T;
	int n1,n2,n3,n4,n5,n6;
	cin>>T;
	while(T--){
	    cin>>n1>>n2>>n3>>n4>>n5>>n6;
	    
	    if(Solve(n1,n2,n3,n4))  cout<<1<<endl;
	    else if(Solve(n1,n2,n5,n6))  cout<<2<<endl;
	    
	    else cout<<0<<endl;
	}
	return 0;
}
