#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int k ; 
        cin >> k ; 
        vector<int>arr(k) ; 

        for(int i = 0 ; i < k ; i++ ){
            cin >> arr[i] ; 
        }
        int cnt = 0 ; 
        bool flag = false ; 

        for(auto it : arr ){
            if(it > 2 ){
                flag = true ; 
                break ; 
            }
            else if(it == 2 ){
                cnt++ ; 

            } 
            if(cnt == 2 ){
                flag = true ; 
                break ; 
            }
        }
        if(flag ){
            cout << "YES" << endl ; 
        }
        else{
            cout << "NO" << endl  ; 
        }

    }
    return 0 ; 
    
}