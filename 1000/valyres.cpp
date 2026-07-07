#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        long long n ;
        cin >> n ; 
        vector<long long >arr(n) ; 
        for(int i = 0 ;i < n ; i++ ){
            cin >> arr[i] ;
        }
       // vector<long long > arr(n) ;
       unordered_set<int> st; 
       for(auto it : arr){
           st.insert(it) ;
       }
       if(st.size() < n ){
        cout << "YES" << endl ;
       }
       else cout << "NO" << endl ;
       
      
        
        
    }
    return 0 ;
}