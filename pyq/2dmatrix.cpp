#include <iostream>
#include <vector>
#include <string>
#include <sstream> 
#include <algorithm>
using namespace std ; 

int main(){
    int m ; 
    int n ; 
    cin >> m ; 
    cin >> n ; 
    cin.ignore() ; 
    string s ; 
    getline(cin , s );
    s.erase(remove(s.begin() , s.end() , '[') , s.end()) ; 
    s.erase(remove(s.begin() , s.end() , ']' ) , s.end()) ; 
    vector<int>arr ; 
    stringstream ss(s) ; 
    string token ; 
    //int num ; 
    while(getline(ss , token , ',' )){
        int num = stoi(token) ;
        arr.push_back(num) ;  
    }
    vector<vector<int>>temp(m , vector<int>(n , 0 )) ; 
    int it = 0 ; 
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            temp[i][j] = arr[it] ; 
            it++ ; 
        }
    }
    
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            cout << temp[i][j] << " "; 
        }
        cout << endl ; 

    }

    return 0 ; 





}