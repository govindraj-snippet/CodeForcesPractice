# include <bits/stdc++.h>
using namespace std ; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL) ; 
    int t ; 
    cin >> t; 
    while(t--){
        int n ; 
        cin >> n ; 
        vector<long long >arr(n) ;
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i] ; 
        }

        if(arr[0] >= arr[1]){
            int avg = (arr[0] + arr[1]) / 2 + 1  ;
            int need = avg - arr[1] ; 
            arr[1] += need ; 
            arr[0] -= need ;
        }
        bool flag = true ; 
        for(int i = 1 ; i < n - 1 ; i++ ){
            if(arr[i] >= arr[ i + 1]){
                if(arr[i] <= 1 ){
                    flag = false; 
                    break ; 
                }
                int avg = (arr[i] + arr[i + 1]) / 2 + 1  ;
                int need = avg - arr[i + 1] ; 
                arr[i + 1] += need ; 
                arr[i] -= need ;
                if(arr[i] < arr[i - 1 ]){
                    flag = false ;
                    break ;
                }
            }
        }
        if(flag){
            cout << "YES\n" ;
        }
        else{
            cout << "NO\n" ;
        }
    }
    return 0 ; 
}