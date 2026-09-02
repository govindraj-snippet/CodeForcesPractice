#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    vector<int>arr(n) ; 
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i]; 
    }
    int maxi = arr[0] ; 
    int cnt = 1  ; 
    for(int i = 1 ; i < n ; i++ ){
        if(maxi < arr[i] ){
            maxi = arr[i] ;
            cnt++ ;
        }
    }
    cout << cnt << endl ; 
    return 0 ; 

}