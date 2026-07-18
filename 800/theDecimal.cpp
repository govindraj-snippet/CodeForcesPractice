#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main(){
   std:: ios::sync_with_stdio(false) ; 
   std:: cin.tie(NULL) ; 
   
   std :: string s ; 
   getline(std :: cin , s); 
   
   int n = stoi(s) ; 
   if(n % 10 == 0 ){
       std ::  cout << s << std ::endl ; 
   } else if( n % 10 <= 5 ){
        n = n - (n % 10 ) ;
   }
   else{
        n = n +( 10- (n % 10 ) ) ; 
   }
   std :: string ans = std :: to_string(n) ;
   std ::cout << ans << std :: endl ; 




}