# include <bits/stdc++.h>
using namespace std ; 

int main(){

    int t ; 
    cin >> t ; 

    while( t-- ){
        int n ; 
        cin >> n ; 

        int cnt1 = 0 ; 
        int cnt2 = 0 ; 

      //  int num = n ; 
        while( n > 0 && n % 2 == 0  ){
            cnt1++ ; 
            n/= 2  ; 
        }
        while( n> 0 && n % 3 == 0 ){
            cnt2++ ; 
            n /= 3 ; 
        }

        if(n > 1 || cnt1 > cnt2  ){
            cout << -1 << endl ; 
        }
        else{
            cout << cnt2 +( cnt2 - cnt1 ) << endl ; 
        }
    }

    return 0 ; 

}