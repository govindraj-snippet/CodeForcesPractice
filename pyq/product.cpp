#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <unordered_map>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    unordered_map<string , double > mpp ; 
    double totalRevenue = 0 ; 
    
    for(int i = 0 ; i < n ; i++ ){
        string s ; 
        double quant ; 
        double price ; 
        cin >> s ; 
        cin >> quant ; 
        cin >> price ;
        mpp[s] += quant * price ; 
        totalRevenue += quant * price ; 
    }
    string topItem ; 
    double maxSale = 0 ; 
    for(auto it : mpp ){
        if(it.second > maxSale ){
            topItem =  it.first; 
            maxSale = it.second ;

        }
    }
    double average  = totalRevenue/n ; 
    cout << "Most Sold Item: " << topItem; 
    cout << endl ; 
    cout << "Total Revenue : " << totalRevenue ; 
    cout << endl ; 
    cout << "Average : " << fixed << setprecision(2) << average ;
    cout << endl ; 
    
    return 0 ; 


}