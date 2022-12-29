#include <iostream>
using namespace std;

void check(string str1, string str2, int len){
    
    int str1Count = 0;
    int str2Count = 0;
    
    for(int i = 0 ; i < len ; i++){
        if(str1[i] == '0')
            str1Count++;
        if(str2[i] == '0')
            str2Count++;
    }
    
    if(str1Count == str2Count)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}

int main() {
	int T,len;
	string str1,str2;
	cin>>T;
	for(int i = 0 ; i < T ; i++){
	    cin>>len;
	    cin>>str1;
	    cin>>str2;
	    check(str1,str2,len);
	    
	}
	return 0;
}
