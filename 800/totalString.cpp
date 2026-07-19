#include <iostream>
#include <string> 
#include <algorithm>
using namespace std; 

int main(){
    ios ::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    string s; 
    getline(cin , s ); 
    int cnt = 0 ; 
    int n = s.length() ; 
    
    for(int i = n - 1; i >= 0 ; i--){
        if((s[i] - '0') % 2 == 0){
            cnt += i + 1 ; 
        }

    }
    cout << cnt << endl ; 
    return 0 ;
}