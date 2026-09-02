#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std ; 

int main(){
    string s ; 
    getline(cin , s ); 
    s.erase(remove(s.begin() , s.end() , '[') , s.end()) ; 
    s.erase(remove(s.begin() , s.end() , ']' ), s.end()) ; 
    stringstream ss(s) ; 
    string token ; 
    vector<int>arr ; 
    while(getline(ss , token , ',')){
        int num = stoi(token) ; 
        arr.push_back(num) ; 
    }
    for(auto it : arr){
        cout << it << " " ; 
    }
    return 0 ; 
} 