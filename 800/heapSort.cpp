# include <bits/stdc++.h>
using namespace std ; 
int cnt = 0 ; 
void heapify( vector<int>&arr , int n ,  int i ){
    cnt++ ; 
    int largest = i ; 
    int left = 2*i + 1 ; 
    int right = 2*i + 2 ; 

    if( left < n && arr[left] > arr[largest ]){
        largest = left ; 
    }
    if(right < n && arr[right] > arr[largest ]){
        largest = right ; 
    }
    if( largest != i ){
        swap( arr[largest] , arr[i]) ; 
        heapify( arr ,n ,  largest ) ; 
    }
}

void heapSort( vector<int>&arr ){

    int n = arr.size() ; 
    for(int i = n / 2 - 1 ; i >= 0 ; i--){
        heapify( arr , arr.size() ,  i ) ; 
    }

    for(int i = n - 1 ; i >= 0 ; i-- ){
        swap( arr[0] , arr[i]) ; 
        heapify(arr , i , 0  ) ; 
    }
}

int main(){
    int n ; 
    cin >> n ; 
    vector<int>arr( n ) ;
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ; 
    } 
    heapSort(arr) ; 
    cout << "Count is : " << cnt << endl ; 

    for(auto it : arr){
        cout << it << endl ; 
    }

    return 0 ; 






}