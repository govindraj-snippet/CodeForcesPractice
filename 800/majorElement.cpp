# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <queue> 
# include <unordered_map> 
# include <unordered_set>
# include <set> 
using namespace std ;

int main(){
    
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
    int t ; 
    cin >> t ; 
    while(t--){
	int n ;
	cin >> n;  
	vector<int>arr(n) ; 
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i] ; 
	}
	unordered_map<int , int >mpp ;
	
	for(int i = 0 ; i < n ; i++ ){
		mpp[arr[i]]++ ; 
	}
	
	vector<int>ans ; 

	for(auto it : mpp){
	    if(it.second > n/3 )ans.push_back(it.first) ; 
	}
        for(int i = 0 ; i < ans.size() ; i++){
	    cout << ans[i] << " " ; 
	}
    }
    return 0 ; 
}
		
  	
	
	
			
