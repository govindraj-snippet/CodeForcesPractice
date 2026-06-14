#include <bits/stdc++.h>
using namespace std ; 

int main(){

    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        int k ; 
        cin >> k ; 
        int x ;
        cin >> x ;
        if(x != 1 ){
            cout << "YES"<< endl ; 
            cout << n << endl ; 
            for(int i = 1 ; i <= n ;i++ ){
                cout << i << " "; 
            }
        } else{
            if(k == 1 || (x == 2 && n % 2 == 1 )){
                cout << "NO" << endl ; 
            } else{
                cout << "YES" << endl ; 
                if(n % 2 == 0 ){
                    cout << n / 2 << endl ; 
                    for(int i = 1 ; i <= n /2 ; i++ ){
                        cout << i << " "; 
                    }
                    cout << endl ;
                } else{
                    cout << (n -3)/2 + 1 << endl ; 
                    for(int i = 0 ; i < (n - 3 )/ 2 + 1 ; i++ ){
                        cout << 2 << endl ; 
                    }
                    cout << 3 << endl ; 
                }
            }
        }
    }
    return 0 ; 
}