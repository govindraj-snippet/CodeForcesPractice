#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std ; 

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ;
    unordered_map<char , char >mpp1 ; 
    unordered_map< char , char >mpp2 ;

    string s1 ; 
    string s2 ; 
    getline(cin , s1); 
    getline(cin , s2) ; 

    int n1 = s1.length() ; 
    int n2 = s2.length() ; 
    bool flag = true ;

    for(int i = 0 ; i < n1 ;i++ ){
        if(mpp1.count(s1[i]) ){
            if(mpp1[s1[i]] != s2[i]){
                flag = false ; 
                break ; 
            }
        } else mpp1[s1[i]] = s2[i] ; 
        if(mpp1.count(s2[i])){
            if(mpp2[s2[i]] != s1[i]) {
                flag = false ; 
                break ; 
            }
        } else mpp2[s2[i]] = s1[i] ; 
    }
    cout << flag << endl ; 
    return 0 ; 
}