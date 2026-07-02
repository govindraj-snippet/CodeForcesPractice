#include <bits/stdc++.h>
using namespace std ;

bool func(long long  n ){
    long long  num = n ; 
    while( n > 0 ){
        int rem = n % 10 ; 
        if(rem != 0 && num % rem != 0 ) return false; 
        n = n / 10 ; 
    }
    return true ; 
}

int main(){
    long long  t ; 
    cin >> t; 
    while(t--){
        long long  n ; 
        cin >> n ;
        while(!func(n)){
            n++ ; 
        }
        cout << n << endl ; 
    }
    return 0 ; 
}