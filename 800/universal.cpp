#include <iostream>
#include <string>
#include <algorithm>

using namespace std ;

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL); 

    string s ; 
    getline(cin , s ) ; 
    string ans = "" ;
    int n = s.length() ; 
    
    for(int i = 0 ; i < n ; i++ ){
        if( s[i] >= 'A' && s[i] <= 'Z'){
            ans += (s[i] - 'A') + 'a'; 
        }
        else ans += s[i] ; 
    }
    cout << ans << endl ; 

}