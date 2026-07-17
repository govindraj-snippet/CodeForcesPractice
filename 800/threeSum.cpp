
#include <iostream>
#include <vector>


using namespace std; 

int main(){
    ios::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 

    int t ; 
    cin >> t ; 
    while(t--){
	int n ; 
	cin >> n;
	
	vector<int>arr(n) ; 
	for(int i = 0 ; i < n ; i++ ){
		cin >> arr[i] ; 
	}
	int j = 0 ; 
	for(int i = 0 ; i < n ; i++){
		if(arr[i] != arr[j] ){
		  j++ ; 
		  arr[j] = arr[i] ; 
		}
	}
	cout << j << endl ; 
	for(int i = 0 ; i < j ; i++ ){
		cout << arr[i] << endl ; 
	}

   }
   return 0 ; 
}		
		   
		
	
		 