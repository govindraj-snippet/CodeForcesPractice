# include <bits/stdc++.h>
using namespace std; 

int main(){
   
    int t ; 
    cin >> t ; 
    while( t-- ){
        int n ; 
        cin >> n ; 
        vector<int>arr(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ; 

        }

        int maxCnt = 0 ; 
        int cnt = 0 ; 
        for(int i = 0 ; i < n  ; i++ ){
            if(arr[i] == 0 ){
                cnt++ ; 
            }
            else{
                maxCnt = max(maxCnt , cnt) ; 
                cnt = 0 ;
            }
        }
        maxCnt = max(maxCnt, cnt);

        cout << maxCnt << endl ; 
    }

    return 0 ; 

}