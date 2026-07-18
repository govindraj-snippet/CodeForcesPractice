# include <iostream>
#include <vector>
# include <string>

using namespace std; 


int main(){
    int n;
    cin >> n ; 
    vector<int>arr(n) ; 

    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ; 
    }
    long long sum = 1LL * (n * (n + 1 )) / 2 ; 
    int temp = 0  ; 
    for(auto it : arr ){
        temp += it ; 
    }
    cout << sum -temp << endl ; 
    return 0 ; 
    

}
