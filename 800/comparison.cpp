#include <bits/stdc++.h>
using namespace std ; 

struct Item{
    int value ; 
    int originalIndex ; 
} ; 

void selectionSort(vector<Item>&arr){

    int n = arr.size() ; 
    for(int i = 0 ; i < n - 1 ; i++ ){
        int minIndex = i ; 
        for( int j = i +1 ; j < n ; j++ ){
            if(arr[i].value > arr[j].value){
                minIndex = j; 
            }

        }
        swap(arr[i] , arr[minIndex]) ; 
    }
}

void bubbleSort(vector<Item>&arr){
    for( int i = 0 ; i < arr.size() ; i++ ){
        for( int j = 0 ; j < arr.size() - i - 1 ; j++ ){
            if(arr[j].value > arr[j+1].value){
                swap(arr[j] , arr[j+1]) ; 
            }
        }
    }
}

void insertionSort(vector<Item>&arr){
    int n = arr.size() ; 
    for( int i = 1 ; i < n ; i++ ){
        Item key = arr[i] ; 
        int j = i - 1 ; 
        while(j >= 0 && arr[j].value > key.value){
            arr[j+1] = arr[j] ; 
            j-- ; 
        }
        arr[j+1] = key ; 
    }
}

void merge(vector<Item>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<Item> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    
    while (i < n1 && j < n2) {
        if (L[i].value <= R[j].value) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(vector<Item>& arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int partition(vector<Item>& arr, int low, int high) {
    Item pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].value < pivot.value) {
            i++;
            swap(arr[i], arr[j]);  
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(vector<Item>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

bool isStable(vector<Item>&arr){
    int n = arr.size() ; 
    for(int i = 0 ; i < n - 1 ; i++ ){
        if(arr[i].value == arr[i+1].value && arr[i].originalIndex > arr[i+1].originalIndex){
            return false ; 
        }
    }
}


int main(){
    vector<Item> arr = {{5, 0}, {3, 1}, {5, 2}, {2, 3}, {3, 4}};

    selectionSort(arr);
    cout << "Selection Sort: " << (isStable(arr) ? "Stable" : "Not Stable") << endl;
    arr = {{5, 0}, {3, 1}, {5, 2}, {2, 3}, {3, 4}};
    bubbleSort(arr);
    cout << "Bubble Sort: " << (isStable(arr) ? "Stable" : "Not Stable") << endl;
    arr = {{5, 0}, {3, 1}, {5,
2}, {2, 3}, {3, 4}};
    insertionSort(arr);

    cout << "Insertion Sort: " << (isStable(arr) ? "Stable" : "Not Stable") << endl;

    arr = {{5, 0}, {3, 1}, {5, 2}, {2, 3}, {3, 4}};

    mergeSort(arr, 0, arr.size() - 1);
    cout << "Merge Sort: " << (isStable(arr) ? "Stable" : "Not Stable") << endl;
    arr = {{5, 0}, {3, 1}, {5, 2}, {2, 3}, {3, 4}};
    quickSort(arr, 0, arr.size() - 1);
    cout << "Quick Sort: " << (isStable(arr) ? "Stable" : "Not Stable") << endl;

}