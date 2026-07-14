# include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 

    int t ; 
    cin >> t ; 
    while(t-- > 0 ){
        int n ; 
        cin >> n ; 
        vector<int>arr(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ; 
        }
        unordered_map<int , int >mpp ; 
        for(auto it : arr ){
            mpp[it]++ ; 
        }
        int flag = -1 ; 
        for(auto it : mpp ){
            if(it.second > n/2 ){
                flag = it.first ;
                break ; 
            }
        }
        cout << flag << endl ; 

    }
    return 0 ; 
}