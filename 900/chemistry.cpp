# include <bits/stdc++.h>
using namespace std ; 

int main(){

    int t ; 
    cin >> t ; 

    while( t-- ){
        int n ; 
        cin >> n ; 

        int k ; 
        cin >> k ; 

        string s ; 
        cin >> s ; 

        unordered_map< char , int > mpp ; 
        for( int i = 0 ; i < n ; i++ ){
            mpp[ s[i] ]++ ; 
        }
        int odds = 0 ; 

        for( auto it : mpp ){
            if( it.second % 2 != 0 ){
                odds++ ; 
            }
        }

        if( odds > k + 1   ) cout << "NO" << endl ; 
        else cout << "YES" << endl ; 
    }

    return 0 ; 

}