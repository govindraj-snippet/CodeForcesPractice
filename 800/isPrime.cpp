#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ; 


int main(){
    ios :: sync_with_stdio(false) ; 
    cin.tie(NULL);
    
    int limit = 1e6 + 1 ; 

    vector<bool>isPrime(limit , true) ; 
    //for(int i = 2 ; i < )
    for(int i = 2 ; i * i < limit ; i++ ){
        if(isPrime[i]){
            for(int j = i * i ; j < limit ; j++ ){
                isPrime[j] = true ; 
            }
        }
    }
    vector<int>prime; 
    for(int i = 0 ; i < limit ; i++ ){
        if(isPrime[i])
        prime.push_back(i) ; 
    }
    int x ;
    cin >> x; 
    int y ; 
    cin >> y ;
    

}