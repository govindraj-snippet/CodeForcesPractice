# include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ; 
        int n = s.length() ; 
        int one = 0  ;
        int zero = 0 ; 
        for( auto it : s ){
            if( it == '0' )zero++ ; 
            else one++ ; 
        }
       // cout << abs( zero - one ) << endl ; 
       int len = 0 ; 
       for(int i = 0 ; i < n ; i++ ){
        if( s[i] == '0'&& one > 0 ){
            one-- ; 
            len++ ; 
        }
        else if(s[i] == '1'&& zero > 0  ){
            zero-- ; 
            len++ ; 
        }
        else break ; 
       }
       cout << n - len << endl ; 

    }
    return 0 ; 
}