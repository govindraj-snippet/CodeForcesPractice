#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std ; 

void func( int n ){
    if(n == 0 )return ; 
    func( n - 1 ); 

    cout << n << " " ; 
}

int main(){
    string s ; 
    
    int n ; 
    cin >> n ; 
    func(n); 

    

}