#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std ;

void func(int i , int size , bool isOne , string s , vector<string>&temp ){
    if(i >= size){
        temp.push_back(s); 
        return ; 
    }
    func(i + 1 , size , false , s + '0' , temp ) ; 
    if(!isOne){
        func(i + 1 , size , true , s + '1', temp) ; 

    }
}

int main(){
    string s ;
    getline(cin , s); 
    int num = stoi(s); 

    vector<string>temp ; 
    string ss = "" ; 
    func(0 , num , false , ss ,temp ) ; 
   // func(1 , num , true , ss , temp  ) ; 

    for(string s : temp){
        cout << s << endl ; 
    }
    return 0 ; 

}