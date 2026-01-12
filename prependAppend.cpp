#include <iostream>
#include <algorithm>
#include <string>
using namespace std ; 

int main(){

    int t ;
    cin >> t ; 

    while( t-- > 0 ){
        
        int n ; 
        cin >> n ; 
        string s ;
        cin >> s ; 

        int prependCount = 0 ; 
        int appendCount = 0 ; 

        int i = 0 ; 
        int j = n - 1 ; 
        while( i <= j ){
            if( s[i] == '0' && s[j] == '1'){
                i++ ; 
                j-- ; 
                prependCount++ ; 
                appendCount++ ; 
            }else if( s[i] == '1' && s[j] == '0') {
                i++ ; 
                j-- ; 
                prependCount++ ;
                appendCount++ ; 

            }
            else break ; 
        }

        int remaining = n - prependCount - appendCount ; 

        cout << remaining <<endl ; 

    }

}