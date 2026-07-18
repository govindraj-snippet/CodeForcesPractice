#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std ; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL) ; 

    string s ; 
    getline(cin , s ); 
    int n = s.length() ; 
    string ans = "" ; 
    unordered_set<char>st ;  

    for(int i = 0 ; i < n ; i++ ){
        if(st.find(s[i]) == st.end()){
            ans += s[i] ; 
            st.insert(s[i]) ; 
        }
    }
    cout << ans << endl ;

    return 0 ; 
    
    
}