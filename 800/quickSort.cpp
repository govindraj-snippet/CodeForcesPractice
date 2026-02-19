#include <bits/stdc++.h>
using namespace std;

long long comparisonCnt = 0;
long long callCount = 0;

void resetCounters() {
    comparisonCnt = 0;
    callCount = 0;
}

int partitionLast(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        comparisonCnt++;
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int partitionFirst(vector<int>& arr, int low, int high) {
    swap(arr[low], arr[high]);
    return partitionLast(arr, low, high);
}

int partitionMiddle(vector<int>& arr, int low, int high) {
    int mid = low + (high - low) / 2;
    swap(arr[mid], arr[high]);
    return partitionLast(arr, low, high);
}

int partitionRandom(vector<int>& arr, int low, int high) {
    int rnd = low + rand() % (high - low + 1);
    swap(arr[rnd], arr[high]);
    return partitionLast(arr, low, high);
}

void quickSortLast(vector<int>& arr, int low, int high) {
    if (low < high) {
        callCount++;
        int pi = partitionLast(arr, low, high);
        quickSortLast(arr, low, pi - 1);
        quickSortLast(arr, pi + 1, high);
    }
}

void quickSortFirst(vector<int>& arr, int low, int high) {
    if (low < high) {
        callCount++;
        int pi = partitionFirst(arr, low, high);
        quickSortFirst(arr, low, pi - 1);
        quickSortFirst(arr, pi + 1, high);
    }
}

void quickSortMiddle(vector<int>& arr, int low, int high) {
    if (low < high) {
        callCount++;
        int pi = partitionMiddle(arr, low, high);
        quickSortMiddle(arr, low, pi - 1);
        quickSortMiddle(arr, pi + 1, high);
    }
}

void quickSortRandom(vector<int>& arr, int low, int high) {
    if (low < high) {
        callCount++;
        int pi = partitionRandom(arr, low, high);
        quickSortRandom(arr, low, pi - 1);
        quickSortRandom(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> original(n);
    for (int i = 0; i < n; i++) cin >> original[i];

    vector<int> arr;

    arr = original;
    resetCounters();
    quickSortLast(arr, 0, n - 1);
    cout << "Last Pivot -> Comparisons: " << comparisonCnt << " Calls: " << callCount << endl;

    arr = original;
    resetCounters();
    quickSortFirst(arr, 0, n - 1);
    cout << "First Pivot -> Comparisons: " << comparisonCnt << " Calls: " << callCount << endl;

    arr = original;
    resetCounters();
    quickSortMiddle(arr, 0, n - 1);
    cout << "Middle Pivot -> Comparisons: " << comparisonCnt << " Calls: " << callCount << endl;

    arr = original;
    resetCounters();
    quickSortRandom(arr, 0, n - 1);
    cout << "Random Pivot -> Comparisons: " << comparisonCnt << " Calls: " << callCount << endl;
}
