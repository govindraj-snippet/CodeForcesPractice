#include <iostream>
#include <vector>
using namespace std ;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL) ; 

    int n ; 
    cin >> n ; 
    vector<int>arr(n) ;
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ; 
    } 
    vector<int>temp ; 
    int cnt = 0 ; 
    for(auto it : arr){
        if(it == 0 )cnt++ ; 
    }
    for(int i = 0 ; i < n ; i++ ){
        //temp.push_back()
        if(arr[i] != 0 ){
            temp.push_back(arr[i]) ; 
        }
    }
    while(cnt > 0 ){
        temp.push_back(0) ; 
        cnt-- ; 
    }
    for(auto it : temp ){
        cout << it << " "; 
    }
    return 0 ; 

}