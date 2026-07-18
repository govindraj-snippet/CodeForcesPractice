#include <iostream>
#include <string> 
#include <vector>
using namespace std; 

int main(){
    
    string s ; 
    getline(cin , s );
    
    int n = s.length() ; 
    int ind = n  ; 
    for(int i = n - 1 ; i >= 0 ; i-- ){
        int num = (s[i] - '0') ; 
        if(num % 2 == 1 ){
            ind = i  ; 
            break ; 
        }
    }
    string ans = "-1" ; 
    if(ind != n ){
        ans = s.substr(0 ,ind + 1); 
    }
    cout << ans << endl ; 
    return 0 ; 


}