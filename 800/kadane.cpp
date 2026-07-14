# include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t ; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n; 
        vector<int>arr(n); 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ;
        }
        int sum = 0 ; 
        int maxSum = INT_MIN ; 
        for(int i = 0 ; i < n ; i++ ){
            sum += arr[i] ; 
            maxSum = max(maxSum , sum ); 
            if(sum < 0 ) sum = 0 ; 
        }
        cout << maxSum << endl ; 
    }
    return 0 ; 
}