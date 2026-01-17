#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t ; 
    cin >>t ; 
    while( t-- > 0 ){
        
        vector<vector<char>>arr( 10 , vector<char>(10) ) ;
        for(int i = 0 ; i < 10 ; i++ ){
            string s ; 
            cin >> s ; 
            for(int j = 0 ; j < 10 ; j++  ){
                arr[i][j] = s[j] ; 
            }
        }
        int cnt = 0 ; 
        for( int i = 0 ; i < 10 ; i++ ){
            for( int j = 0 ; j < 10 ; j++ ){
                
               if( arr[i][j] == 'X' ){
                 if( i == 0 || i == 9 || j == 0 || j == 9 )cnt += 1 ; 
                else if( ( i == 1 && j > 0 && j < 9 ) || ( i == 8 && j > 0 && j < 9 ) || ( j == 1 && i > 0 && i < 9 ) || ( j == 8 && i > 0 && i < 9 ))cnt += 2  ;
                else if( ( i == 2 && j > 1 && j < 8 ) || ( i == 7 && j > 1 && j < 8 ) || ( j == 2 && i > 1 && i < 8 ) || ( j == 7 && i > 1 && i < 8 ))cnt += 3  ;
                else if( ( i == 3 && j > 2 && j < 7 ) || ( i == 6 && j > 2 && j < 7 ) || ( j == 3 && i > 2 && i < 7 ) || ( j == 6 && i > 2 && i < 7 ))cnt += 4  ;
                else if( ( i == 4 && j > 3 && j < 6 ) || ( i == 5 && j > 3 && j < 6) || ( j == 4 && i > 3 && i < 6 ) || ( j == 5 && i > 3 && i < 6 ))cnt += 5 ;   ;

               }

            }
        }
        cout << cnt << endl ; 

    }

    return 0 ; 

}
