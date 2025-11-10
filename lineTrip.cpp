#include <iostream>
#include <vector> 
#include <algorithm> 
#include <set> 

using namespace std ; 

int main(){
    
    int numTestCase ; 
    cin >> numTestCase ; 

    while( numTestCase > 0 ){
        int n , k ; 
        cin >> n >> k ; 
        vector< int > arr ; 
        for( int i = 0 ; i < n ; i++ ){
            arr.push_back( i ) ; 
        }
        set< int > st( arr.begin() , arr.end()) ; 
        int ans = 0 ; 
        
        for( int i = 1 ; i <= 2 * n ; i++ ){

            int fuel = i ; 
            bool reached = true  ; 
            for( int j = 0 ; j < 7 ; j++ ){
                 
                if( fuel < 0 ){
                    reached = false ; 
                    break ; 

                }
                if( st.find(j) != st.end()){
                    fuel = i ; 
                }
                fuel -= 1 ;
                

            }
            if( reached == false )continue ; 
            for( int j = n ; j >= 0  ; j-- ){

                  if( fuel < 0 ){
                    reached = false ; 
                    break ; 

                }
                if( st.find(j) != st.end()){
                    fuel = i ; 
                }
                fuel -= 1 ;
            }

            if( reached){
                ans = i ; 
                break ; 
            }


        }

        cout << ans << endl ;
        numTestCase-- ; 
        
    }

    return 0 ; 
}