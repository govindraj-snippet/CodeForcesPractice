#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while( t-- ){
        int n ; 
        cin >> n ; 
        int k ; 
        cin >> k ; 
        vector<int>arr(n) ; 

        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ; 
        }
        int maxLength = 1;
        int counter = 0 ; 

        sort( arr.begin() , arr.end()) ; 
        for(int i = 1 ; i < arr.size() ; i++ ){
            if( arr[i] - arr[ i - 1 ] <= k ){
                counter++ ; 
            }
            else counter = 1 ; 
            maxLength = max( counter , maxLength ) ; 
        }

        cout << n - maxLength << endl ; 

    }
    return 0 ; 

}