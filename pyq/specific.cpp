#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std ; 

int main(){
    string s ; 
    getline(cin , s ) ; 
    stringstream ss(s) ; 
    vector<int>arr ;
    int num ; 
    while(ss >> num ){
        arr.push_back(num) ; 
    }
    unordered_map < int , int >mpp ; 
    
    int sum = 0 ; 
    
}
