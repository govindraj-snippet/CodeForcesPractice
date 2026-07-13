#include <bits/stdc++.h>
using namespace std ;


vector<long long > temp = {11 , 111 , 1111, 11111, 111111 , 1111111 , 11111111 , 111111111} ;
int maxi = 1000000000 ; 

bool func(long long  n ){
    unordered_map< int , int >mpp ; 
    while(n > 0 ){
        int rem = n % 10 ; 
        if(mpp.count(rem)){
            mpp[rem]++  ; 
        } else mpp[rem] = 1   ;
        if(mpp.size() > 2 )return false ; 
        n = n / 10 ; 

    }
    return true ; 
}

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        long long  n ; 
        cin >> n ;
        long long ans = 0;
        for(int i = 0 ; i < temp.size() ; i++ ){
            long long num =  n * temp[i] ;
            if(func(num)){
                ans = temp[i];
                break ; 
            } 
        } 
        cout << ans << endl ; 
        
    }
    return 0 ; 
}