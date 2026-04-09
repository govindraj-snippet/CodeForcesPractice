# include <bits/stdc++.h>
using namespace std ; 

int isSafe( int i , int j , vector<vector<int>>&grid ){
    int row = i ; 
    int col = j ; 
    int n = grid.size();
    while( row-- >= 0 )  if(grid[row][col] ) return 0 ; 
    row = i ; 
    while( row++ < n ) if(grid[row][col] ) return 0 ; 
    row = i ; 
    while( col-- >= 0 ) if(grid[row][col] ) return 0 ;
    col = j ; 
    while( col++ < n ) if(grid[row][col] ) return 0 ;
    col = j ; 
    while( row-- >= 0 && col -- >= 0 )if(grid[row][col] ) return 0 ;
    row = i ; 
    col = j ; 
    while( row-- >= 0 && col++ < n ) if(grid[row][col] ) return 0 ;
    row = i ;
    col = j ;
    while( row++ < n && col-- >= 0 ) if(grid[row][col] ) return 0 ;
    row = i ;
    col = j ;
    while( row++ < n && col++ < n ) if(grid[row][col] ) return 0 ;
    return 1 ;
}

void placeQueens( int row , int n , vector<vector<int>>&grid , vector<vector<pair<int, int >>>&result ){

    if(row == n  ){
        vector<pair < int , int >>ans ; 
        for(int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < n ; j++ ){
                ans.push_back({ i + 1 , j + 1 } ) ; 
            }
        }
        result.push_back(ans) ; 
        return ; 
    }
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            if(isSafe(i , j , grid )){
                grid[i][j] = 1 ; 
                placeQueens(row + 1 , n , grid , result ) ; 
                grid[i][j] = 0 ; 
            }
        }
    }

}

vector<vector<pair< int , int >>> nQueens( int n  ){
    vector<vector<pair< int , int >>> result ; 
    //vector<vector<int>>> grid( n , vector<int>(n , 0 )) ; 
    vector<vector<int>>grid( n , vector<int>( n , 0 )) ; 

    placeQueens(1 , n , grid , result ); 

    return result ; 


}

int main(){
    int n ; 
    cout << "Enter the table size " ; 
    cin >> n ; 
    
    vector<vector<pair < int , int >>>ans = nQueens(n) ; 
    for(int i = 0 ; i < ans.size() ; i++ ){
        for(int j = 0 ; j < ans[i].size() ; j++ ){

        }
    }
    return 0 ; 

}