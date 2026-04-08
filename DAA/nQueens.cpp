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

void placeQueens( int row , int n , vector<vector<int>>&grid , vector<vector<int>>&result ){

    if(row == n  ){
        vector<int>ans ; 
        for(int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < n ; j++ ){
                ans.push_back(j +1 ) ; 
            }
        }
        result.push_back(ans) ; 
    }
}

int main(){
    int n ; 

}