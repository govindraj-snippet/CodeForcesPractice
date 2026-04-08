# include <bits/stdc++.h> 
using namespace std ; 



int func( int n ){
    if( n == 0 ) return 0 ; 
    if( n == 1 ) return 1 ; 

    return func( n - 1 ) + func( n - 2 ) ;
}

int memo( int n , vector<int>&dp ){

    if(dp[n] != -1 ) return dp[n] ; 
    if( n == 0 ) return dp[n] = 0 ; 
    if( n == 1 ) return dp[n] = 1 ; 

    

    return dp[n] = memo( n - 1 , dp ) + memo( n - 2  , dp ); 
}
int main(){
    int n ; 
    cout << " Enter the value of the n " << endl ; 
    cin >> n ; 
    vector<int>dp( n + 1  , - 1 ); 
    cout << func(n ) << endl ; 
    cout<< memo( n , dp )<<endl  ;
    cout << dp[n] << endl ;


}


