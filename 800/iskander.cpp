#include <bits/stdc++.h>
using namespace std ; 

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    int t; 
    cin >> t  ;
    while(t--){
        int n ;
        cin >> n; 

        string s ;
        cin >> s ; 
        int cnt = 0; 
        int maxi = 0 ; 
        for(int i = 0; i < n ; i++ ){
            if(s[i] == '#'){
                cnt++ ; 

            }else{
                maxi = max(maxi , cnt ) ;
                cnt = 0 ; 
            }
        }
        maxi = max(maxi , cnt ); 
        if(maxi == 0 ){
            cout << 0 << endl ; 
        }
        else if(maxi == 1 || maxi == 2 ){
            cout << 1 << endl ;
        } 
        else{
            cout << (maxi + 1)/2 << endl ; 
        }

    }
    return 0 ; 
}