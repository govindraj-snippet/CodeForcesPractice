#include <iostream>
#include <vector>
#include <string> 
using namespace std ; 

int main(){
    int n ; 
    int m ; 
    cin >> m ; 
    cin >> n ; 
    vector<int>arr ; 
    for(int i = 0 ; i < n ; i++ ){
        int num ; 
        cin >> num ; 
        arr.push_back(num) ; 
    }
    for(int i = 0 ; i < arr.size() ; i++ ){
        cout << arr[i] << endl ; 
    }
    cout << "loda le " << m << endl ; 
    return 0 ; 
    
}