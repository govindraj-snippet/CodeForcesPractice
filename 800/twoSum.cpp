#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n ; 
        cin >> n ; 
        int target ;
        cin >> target ; 
        vector<int>arr(n); 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ;
        }
        unordered_map<int , int >mpp ; 
        
        for(int i = 0 ; i < n ; i++ ){
            if(mpp.find(target - arr[i] ) != mpp.end()){
               cout << mpp[target - arr[i]] << endl ;
               cout << i << endl ; 
               break ; 
            }
            mpp[arr[i]] = i ;
        }

        

    }
}