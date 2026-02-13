# include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        string s ; 
        cin >> s ; 
        unordered_map< char , int > mpp ; 
        vector<int>dist( s.length()) ; 
        int cnt = 0 ; 
        for(int i = 0 ; i < s.length() ; i++ ){
            mpp[s[i]]++ ; 
            if(mpp[s[i]] == 1 ){
                cnt += 1 ; 
            }
            dist[i] = cnt ; 
        }

        int ans = 0 ; 
        for( auto it : dist ){
            ans += it ; 
        }

        cout << ans <<endl ; 

    }

    return 0 ; 
}
