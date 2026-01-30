# include <bits/stdc++.h>
using namespace std ; 

int main(){

    int t ; 
    cin >> t ; 

    int dx[] = { 1 , 1 , -1 , -1 } ; 
    int dy[] = { 1 , -1 , -1 , 1 } ; 

    while( t-- ){
        int a , b ; 
        cin >> a ; 
        cin >> b ; 
        int kingX , kingY , queenX , queenY ; 
        cin >> kingX; 
        cin >> kingY ;
        cin >> queenX ; 
        cin >> queenY ; 


        set<pair<int , int >>king ; 
        set<pair<int , int >>queen ; 

        for(int i = 0 ; i < 4 ; i++ ){
            king.insert({ kingX + dx[i]*a , kingY + dy[i]*b}) ; 
            king.insert({ kingX + dx[i]*b , kingY + dy[i]*a}) ; 

            queen.insert({queenX + dx[i]*a , queenY + dy[i]*b });
            queen.insert({queenX + dx[i]*b , queenY + dy[i]*a });
        }

        int ans = 0 ; 
        for( auto it : queen ){
            if( king.find( it ) != king.end() )ans++ ; 
        }

        cout << ans << endl ; 

    }
}