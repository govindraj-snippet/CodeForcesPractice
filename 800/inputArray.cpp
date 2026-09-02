#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std ; 

int main(){
    string line ; 
    getline(cin , line ); 
    stringstream ss(line) ; 
    int num ; 
    vector<int>arr ; 
    while(ss >> num )arr.push_back(num) ; 
    for(int x : arr){
        cout << x << " " ; 
    }
}