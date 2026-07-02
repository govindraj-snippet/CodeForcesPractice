#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n ; 
        string s ; 
        cin >> s ; 
        int ops = 0 ; 
        int sum = 0 ; 
        for(auto it : s ){
            if(it == '(') sum++ ; 
            else sum-- ; 
            if(sum < 0 ){
                ops++ ;
                sum = 0 ; 
            }
        }
        cout << ops << endl ;
    }
    return 0 ;
}