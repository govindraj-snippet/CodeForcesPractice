#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t ;
    cin >> t ; 
    while(t--){
        long long n ; 
        cin >> n ; 
        vector<long long > arr(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i];
        }
        long long totalXor = 0 ; 
        for(int i = 0 ; i < n ; i++ ){
            totalXor ^=arr[i] ; 
        }
        if( n % 2 != 0 ){
            cout << totalXor<<endl ; 
        }
        else{
            if(totalXor == 0 ){
                cout << 0 << endl ; 
            }
            else{
                cout << -1 << endl ; 
            }
        }
    }
    return 0 ; 
    
}