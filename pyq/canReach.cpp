#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <sstream>
using namespace std ; 

bool func(int i ,int sum , vector<int>&arr ){
    if(sum < 0 )return 0 ; 
    if(i == 0 ){
        sum -= arr[i] ;
        if(sum == 0 )return true; 
    }
    bool take = func( i + 1 , sum - arr[i] , arr) ; 
    bool notTake = func(i + 1, sum , arr ) ; 

    return take || notTake ;
}

int main(){
    string s ;
    getline(cin , s ) ; 
    stringstream ss(s) ; 
    int num ; 
    vector<int>arr ; 
    while(ss >> num ){
        arr.push_back(num) ; 
    }
    

    
}