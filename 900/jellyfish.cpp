#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int maxValue ; 
        cin >> maxValue ; 
        int start ; 
        cin >> start;
        int n ; 
        cin >> n ;
        vector<int>arr(n) ; 
        for(int i = 0 ; i < n ;i++ ){
            cin >> arr[i] ; 
        } 
        long long  maxTime = start ;
        for(int i = 0 ; i < n ;i++  ){
            maxTime += min( arr[i] , maxValue - 1  ) ; 
        }
        cout << maxTime << endl ; 

    }
    return 0 ; 
}