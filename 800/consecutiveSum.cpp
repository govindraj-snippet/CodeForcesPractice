#include <iostream>
#include <vector>
#include <string> 
using namespace std ; 
int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 

    string s ;
    getline(cin , s ) ; 
    int n = s.length() ; 
    int sum = 0 ; 
    for(size_t i = 0 ; i < n ; i++ ){
        int temp = 0 ; 
        while( i < n && s[i] >= '0' && s[i] <= '9' ){
            temp = temp * 10 ; 
            temp += (s[i] - '0') ; 
            i++ ; 
        }
        sum += temp ;
    }
    cout << sum << endl ; 
    return 0; 

}
