#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std ;

int main(){
    string s ; 
    string temp1 ; 
    string temp2 ; 

    getline(cin , s ); 
    getline(cin , temp1) ;
    getline(cin , temp2) ;
    int n = s.length() ; 
    int n1 = temp1.length() ; 
    int n2 = temp2.length() ;
    unordered_set<string>st ; 
    vector<string>ans; 


    for(int i = 0 ; i < n ; i++ ){
        string temp = "" ; 
        for(int j = i ; j < n ; j++ ){
            temp += s[j] ; 
            if(temp.length() >= n1 ){
                if(temp.substr(0 , n1 ) == temp1){
                    if(temp.length() >= n2 && temp.substr(n - n1 ) == temp2){
                        if(st.find(temp) == st.end()){
                            st.insert(temp) ; 
                            ans.push_back(temp) ; 
                        }
                    }
                }
            }
        }
    }
    for(auto it : st ){
        cout << it << endl ; 
    }
    return 0 ; 


    
}