#include <iostream>
using namespace std;

int cost(int arr1[], int arr2[], int n, int X){
    int ans = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(arr1[i] >= X)
            ans += arr2[i];
    }
    
    return ans;
}

int main() {
    
    int T,N,X;
    cin>>T;
    while(T--){
        cin>>N>>X;
        int arr1[N];
        int arr2[N];
        
        for(int i = 0; i < N ; i++){
            cin>>arr1[i];
        }
        for(int i = 0; i < N ; i++){
            cin>>arr2[i];
        }
        
        int ans = cost(arr1,arr2,N,X);
        
        cout<<ans<<endl;
    }
	return 0;
}
