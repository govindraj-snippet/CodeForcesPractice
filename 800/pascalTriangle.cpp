# include <iostream>
# include <vector>
#include <string> 
#include <unordered_map> 
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std ; 

int main(){
    ios::sync_with_stdio(0) ; 
    cin.tie(NULL) ; 

    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n; 
        vector<vector<int>>temp ;
        
        temp.push_back({1}) ; 
        temp.push_back({1 , 1}) ; 
        for(int i = 2 ; i < n ; i++ ){
            vector<int>curr(i + 1 ) ; 
            curr[0] = 1 ; 
            curr[curr.size() - 1 ] = 1;
            vector<int>prev = temp.back() ; 
            for(int i = 1 ; i < curr.size() - 1 ; i++ ){
                curr[i] = prev[i - 1 ] + prev[i] ; 
            }
            temp.push_back(curr) ;
        }

        for(int i = 0; i < temp.size(); i++ ){
            for(int j = 0 ; j < temp[i].size() ; j++ ){
                cout << temp[i][j] << " " ; 
            }
            cout << endl ; 
        }
        
    }

}
