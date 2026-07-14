# include <bits/stdc++.h>
using namespace std ; 

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    int t ; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n ; 
        vector<int>arr(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ; 
        }
        unordered_map< int , int >mpp ; 
        for(auto it : arr){
            mpp[it]++ ; 
        }
        int maxCnt = 0 ; 
        int cnt = 0 ; 
        for(int i = 0 ; i < n ; i++ ){
            if(mpp.find(arr[i] - 1 ) != mpp.end()){
                continue ; 
            }
            if(mpp.find(arr[i] + 1 ) != mpp.end()){
                int temp = arr[i] ; 
                while(mpp.find(temp) != mpp.end()){
                    cnt++  ; 
                    temp++ ; 
                }
                
            }
            maxCnt = max(maxCnt , cnt ) ; 
            cnt = 0 ; 

        }
        cout << maxCnt << endl ; 

    }
    return 0 ; 
}