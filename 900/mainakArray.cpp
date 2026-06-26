#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t; 

    while(t--){
        int n ; 
        cin >> n; 
        int ans = 0 ; 
        vector<long long >arr(n) ;
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i]; 
        }
        for(int i = 0 ; i < n ; i++ ){
            ans = max(ans , arr[n - 1] - arr[i]) ; 
        }
         for(int i = 0 ; i < n ; i++ ){
            ans = max(ans , arr[n - 1] - arr[i]) ; 
        }
         for(int i = 0 ; i < n ; i++ ){
            ans = max(ans , arr[n - 1] - arr[i]) ; 
        }
    }
}