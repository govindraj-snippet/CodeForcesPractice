#include <bits/stdc++.h>
using namespace std ; 

int main(){
    long long  t ; 
    cin >> t ; 
    while( t-- ){
        long long  n ; 
        cin >> n ; 
        long long cnt = 0 ; 
        long long maxCnt = 0; 
        for( int i = 1 ; i <= n ; i++){
            if( n % i == 0 ) cnt++ ; 
            else{
                maxCnt = max( cnt , maxCnt ) ; 
                cnt = 0 ;
            }
        }
         maxCnt = max(maxCnt , cnt) ; 
        cout << maxCnt << endl ; 
    }
}

