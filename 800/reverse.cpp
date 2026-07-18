#include <iostream>
#include <string> 
using namespace std;  

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL) ; 
    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        getline(cin , s ) ; 

       // reverse(s.begin() , s.end()) ; 
       int low = 0 ; 
       int high = s.length() ; 
       while(low <= high ){
         swap(s[low] , s[high]) ; 
         low++ ; 
         high-- ; 
       }
       for(char c : )

    }



}