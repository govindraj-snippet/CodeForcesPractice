#include <iostream>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 


int main(){
   int t; 
   cin >> t; 
   while(t--){
        int n ;
        int m ; 
        cin >> n ; 
        cin >> m ; 
        vector<int>arr1(n) ; 
        vector<int>arr2(m) ; 
   
        for(int i = 0 ; i < n ; i++ ){
         cin >> arr1[i] ; 
        }
        for(int i = 0 ; i < m ; i++ ){
         cin >> arr2[i] ; 
        }
        unordered_set<int > st ; 
        for(int i : arr1) {
         st.insert(i) ;  
        }
        for(int i : arr2){
         st.insert(i) ; 
        }
        for(auto it : st ){
         cout << it << " "; 
        }
        cout << endl  ; 
   }
   return 0 ; 


    
}