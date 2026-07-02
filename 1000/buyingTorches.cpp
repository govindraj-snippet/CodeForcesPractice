# include <bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin >> t ;
    while(t--){
        long long x  ; 
        cin >> x; 
        long long y ; 
        cin >> y ; 
        long long k ;
        cin >> k ;
        long long stickCnt = 1 ;
        long long requiredCnt = (y * k) + k - 1 ;
       long long cnt = (requiredCnt + x - 2) / (x - 1);
      //  long long coal =  (k / y ) + (k % y != 0) ;
    //    cnt += coal ; 
        cnt += k;
        cout << cnt << endl ;
    }
    return 0 ; 
}