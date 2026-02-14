# include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ; 
        int one = 0  ;
        int zero = 0 ; 
        for( auto it : s ){
            if( it == '0' )zero++ ; 
            else one++ ; 
        }
       // cout << abs( zero - one ) << endl ; 
    }
    return 0 ; 
}