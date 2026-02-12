# include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 

    while(t--){
        int n ; 
        cin >> n ; 
        vector<long long >arr( n );
        for(int i = 0 ; i < n ;i++  ){
            cin >> arr[i] ; 
        }
        long long  totalMult = 1 ; 
        for( auto it : arr ){
            totalMult *= it ; 
        }
        long long prefixMult = arr[0] ; 
        long long  k = -1 ; 
        for(int i = 1 ; i < n ; i++ ){
            prefixMult *= arr[i] ; 
            if( prefixMult == totalMult/prefixMult){
                k = i ; 
                break ; 
            }
        }
        cout << k << endl ; 
    }
    return 0 ; 
}