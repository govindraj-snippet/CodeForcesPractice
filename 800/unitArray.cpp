#include <bits/stdc++.h>
using namespace std ; 

int main(){

    int t ; 
    cin >> t ; 

    while(t--){

        long long n ; 
        cin >> n ; 

        vector<int>arr(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ; 
        }
        int sum = 0 ; 
        int cnt = 0 ; 

        for(auto it : arr ){
            sum += it ; 
            if(it == -1 )cnt += 1 ; 
        }

        if( sum >= 0 && cnt % 2 == 0  ){
             cout << 0 << endl ;
             break ; 
        } 

        if( cnt % 2 != 0 ){
           if(sum >= 0 ){
                cout << 1 << endl ; 
           }
           else{
             
             if(abs(sum) % 2 != 0 ){
                cout << abs(sum) << endl ; 
                break ; 
             }
             else{
                cout << abs(sum ) + 1 << endl ; 
             }
           }
        }else{

            if(sum >= 0 ){
                cout << 2 << endl ; 
            }
            else{
                if(abs(sum) % 2 != 0 ){
                    cout << abs(sum) + 1 << endl ; 
                    break ; 
                 }
                 else{
                    cout << abs(sum )  << endl ; 
                 }
            }
        }
    }

}