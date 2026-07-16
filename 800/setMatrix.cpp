# include <bits/stdc++.h>

using namespace std ;

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    int t ;
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        int m ; 
        cin >> m ; 
        vector<vector<int>>arr(n , vector<int>(m , 0 )); 
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                cin >> arr[i][j] ; 
            }
        }
        vector<pair<int , int >>temp ; 
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                if(arr[i][j] == 0 ){
                    temp.push_back({i , j }); 
                }
            }
        }
        for(auto it : temp){
            int row = it.first ;  
            int col = it.second ; 
            for(int i = 0 ; i < m ; i++ ){
                arr[row][i] = 0 ;  
            }
             for(int i = 0 ; i < n ; i++ ){
                arr[i][col] = 0 ;  
            }

        }
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                cout << arr[i][j] << " "  ; 
            }
            cout << endl  ; 
        }
    }
    return 0 ; 



}