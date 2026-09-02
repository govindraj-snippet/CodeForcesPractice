#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std ; 

int main(){
    string s ;
    getline(cin , s) ; 
    s.erase(remove(s.begin() , s.end() , '[') , s.end()) ; 
    stringstream ss(s); 
    vector<int>arr ; 
    string token ; 
    while(getline(ss , token , ',')){
        int num = stoi(token) ;  
        arr.push_back(num) ; 
    }
    for(auto it : arr){
        cout << it << " "; 
    }

}