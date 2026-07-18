#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ; 

int main(){
    ios :: sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    string s1;
    string s2 ;  
    getline(cin ,s1 );
    getline(cin , s2) ; 
    int n1 = s1.length() ; 
    int n2 = s2.length() ; 

    int i = 0 ; 
    int j = 0 ; 
    string ans = "" ; 
    while( i < n1 && j < n2){
        ans += s1[i] ; 
        ans += s2[j] ; 
        i++ ; 
        j++ ; 
    }
    while( i < n1 ){
        ans += s1[i] ;
        i++ ; 
    }
    while( j < n2 ){
        ans += s2[i] ; 
        j++ ; 
    }

    cout << ans << endl ; 


     
    
}