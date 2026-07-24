#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std ; 

int main(){
    string s ;  
    getline(cin , s ) ;
    s.erase(remove(s.begin() , s.end() ,'[') , s.end()) ; 
    s.erase(remove(s.begin() , s.end() , ']') , s.end() ) ; 
    string token ; 
    stringstream ss(s) ; 
    vector<int>arr ; 
    while(getline(ss , token , ',')){
        int num = stoi(token) ; 
        arr.push_back(num) ; 
    }
    for(auto it : arr){
        cout << it ; 
    }
    return 0  ; 

}
