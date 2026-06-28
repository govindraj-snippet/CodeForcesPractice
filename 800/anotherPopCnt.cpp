#include <bits/stdc++.h>
using namespace std ; 

int func(int sum ){
    int cnt = 0 ; 
    while(sum > 0 ){
        if((sum & 1 ) == 1 )cnt++ ; 
        sum << 1 ; 
    }
    return cnt ; 
}

int main(){
    int t ;
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n ; 
        int k ; 
        cin >> k ; 
        int sum = 0 ; 
        while(k >= 0 && n >= 0 ){
            int rem = n / k ; 
            k = k -1 ; 
            n = n - rem ; 
            sum += rem ; 
        }
        cout << func(sum) << endl ; 

        
    }
    return 0 ; 
}