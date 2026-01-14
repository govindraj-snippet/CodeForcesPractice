#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ; 

// bool isSorted(vector<int>&temp){

//     for( int i = 0 ; i < temp.size() - 1 ; i++ ){
//         if( temp[i] > temp[i + 1 ]) return false ; 
//     }
//     return true ; 
// }

int main(){
    int t ; 
    cin >> t ; 

    while( t-- > 0 ){
        int n ; 
        cin >> n ; 
        vector<int>temp ; 
        for( int i = 0 ; i < n ; i++ ){
            int ele ;
            cin >> ele ; 
            temp.push_back(ele) ; 
         //   cout << " "  ; 
        }

        if(temp[0] == 1 ){
            cout << "YES" << endl ; 
        }
        else {
            cout << "NO"<<endl ; 
        }
        
        
    }
}