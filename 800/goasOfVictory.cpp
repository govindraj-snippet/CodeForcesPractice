#include <bits/stdc++.h>
using namespace std ; 

int main(){

    int t ; 
    cin >> t ; 

    while( t-- > 0 ){
        int n ; 
        cin >> n ; 
        vector<int> arr(n - 1 ) ; 
        for( int i = 0 ; i < n - 1  ; i++ ){
            cin >> arr[i] ; 
        }
        int sum = 0 ; 
        for( auto it : arr ){
            sum += it; 
        }
        cout << -1 * sum << endl ; 
    }
    return 0 ; 
}