#include <iostream>
#include <vector>
using namespace std ; 

int main(){
    ios :: sync_with_stdio(false) ; 
    cin.tie(NULL); 

    int n ; 
    cin >> n ; 
    vector<int>arr(n) ; 
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ; 
    }
    int sum = 0 ; 
    vector<int>prefix(n) ; 
    sum += arr[0] ; 
    for(int i = 1 ; i < n ; i++ ){
        sum += arr[i] ;
        prefix[i] = prefix[i - 1  ] + arr[i - 1 ]; 
    }
}