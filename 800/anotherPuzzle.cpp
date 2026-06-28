#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        long long n ; 
        cin >> n ; 
        long long  c ; 
        cin >> c ; 
        vector<int>arr1(n , 0 ) ; 
        vector<int>arr2(n , 0 ); 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr1[i] ; 
        }
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr2[i] ; 
        }
      //  int sum = 0 ; 
        bool flag = true ; 
        long long ans1 = 0 ; 

        for(int i = 0 ; i < n ; i++ ){
            if(arr1[i] < arr2[i]){
                flag = false ; 
                break ;
            }
            ans1 += abs(arr1[i] - arr2[i]) ; 
        }
        if(!flag ){
            ans1 = 1e9 ; 
        }
        long long ans2 = 0 ; 
        sort(arr1.begin() , arr1.end()) ; 
        sort(arr2.begin() , arr2.end()) ; 
        ans2 += c ; 
        flag = true ; 
        for(int i = 0 ; i < n ; i++ ){
            if(arr1[i] < arr2[i]){
                flag = false ; 
                break ; 
            }
            ans2 += abs(arr1[i] - arr2[i]) ; 
        }
        if(!flag){
            ans2 = 1e9 ; 
        }
        long long ans = min(ans1 , ans2 ); 
        if(ans == 1e9) cout << -1 << endl ; 
        else cout << ans << endl ; 
    }
    return 0 ; 
}