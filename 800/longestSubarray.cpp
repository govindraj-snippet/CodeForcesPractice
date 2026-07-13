# include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n; 
        int k ; 
        cin >> k ; 
        vector<int> arr(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ; 
        }
        int sum = 0 ; 
        unordered_map< int , int >mpp ;
        int maxLen = 0 ; 
        mpp[sum] = -1 ;
        for(int i = 0 ; i < n ; i++ ){
            sum += arr[i] ; 
            if(mpp.count(sum - k )){
                maxLen = max(maxLen , i - mpp[sum - k ]) ; 
            }
            if(!mpp.count(sum)){
                mpp[sum] = i ; 
            }
        }
        cout << maxLen << endl ;

    }
    return 0 ; 
}