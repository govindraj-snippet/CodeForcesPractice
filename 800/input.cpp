#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std ; 

int main(){
    string s ; 
    getline(cin , s ); 
    stringstream ss(s) ;
    vector<int>arr ; 
    int num ; 
    while(ss >> num )arr.push_back(num) ;  


}