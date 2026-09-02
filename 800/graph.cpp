#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include <queue>

using namespace std ; 

vector<int>bfs(vector<vector<int>>&adjList){
    int n = adjList.size() ; 
    queue<int>q; 
    vector<int>visited(n ,  0); 
    vector<int>ans ; 
    q.push(0) ; 
    visited[0] = 1; 
    while(!q.empty()){
        int front = q.front(); q.pop(); 
        ans.push_back(front) ; 
        vector<int>temp = adjList[front]; 
        for(int i = 0 ; i < temp.size() ; i++ ){
            if(!visited[temp[i]]){
                visited[i] = 1 ; 
                q.push(temp[i]) ; 
            }
        }

    }
    return ans ;



}
int dfs(int node , vector<vector<int>>&adjList , vector<int>&visited , vector<int>&ans ){
    int n = adjList.size() ; 
    ans.push_back(node) ;
    visited[node] = 1; 

    vector<int>temp = adjList[node]; 
    for(int i = 0 ; i <temp.size() ; i++ ){
        if(!visited[temp[i]]){
            dfs(temp[i] , adjList , visited , ans ) ; 
        }
    }
    
}
int main(){
    int n ; 
    int m ; 
    cin >> n ; 
    cin >> m ; 
    vector<vector<int>>adjList(n) ; 




}