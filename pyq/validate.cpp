#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <sstream>
using namespace std ; 

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    string s ; 
    getline(cin , s ); 
    stringstream ss(s) ; 
    vector<int>arr; 
    int num ; 
    while(ss >> num ){
        arr.push_back(num) ; 
    }
    int m = arr[0] ; 
    int n = arr[1]; 
 //   vector<vector<int>>temp ; 
    vector<vector<int> >temp(n , vector<int>(m , 1e9)) ;
    for(int i = 0; i < n ; i++ ){
        for(int j = 0 ; j < m ; j++ ){
            cin >> temp[i][j]; 
        }
    } 
    vector<int>prime(1e5 + 1  , true ) ; 
    prime[0] = false ; 
    prime[1] = false ; 
    for(int i = 2 ; i * i < 1e5 ; i++ ){
       if(prime[i]){
         for(int j = i * i ; j < 1e5 ; j+=i ){
            prime[j] = false ; 
        }
       }
    }




    



}