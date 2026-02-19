#include <bits/stdc++.h>
using namespace std;

long long comparisons = 0;
long long quickSortCalls = 0;

void quickSort(vector<int>& arr, int l, int r);

int partitionArr(vector<int>& arr, int l, int r) {
    int pivot = arr[r];
    int idx = l - 1;

    for (int j = l; j < r; j++) {
        comparisons++;
        if (arr[j] < pivot) {
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[idx], arr[r]);
    return idx;
}

void quickSort(vector<int>& arr, int l, int r) {
    quickSortCalls++;
    if (l < r) {
        int p = partitionArr(arr, l, r);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, r);
    }
}

vector<int> averageCase(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000;
    return arr;
}

vector<int> bestCase(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000;
    return arr;
}

vector<int> worstCase(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = i;
    return arr;
}

void resetCounters() {
    comparisons = 0;
    quickSortCalls = 0;
}

void printResult(const string& caseName) {
    cout << caseName << "\n";
    cout << "Comparisons = " << comparisons << "\n";
    cout << "QuickSort Calls = " << quickSortCalls << "\n\n";
}

int main() {
    srand(time(nullptr));

    int n = 1000;

    vector<int> avg = averageCase(n);
    resetCounters();
    quickSort(avg, 0, n - 1);
    printResult("Average Case:");

    vector<int> best = bestCase(n);
    resetCounters();
    quickSort(best, 0, n - 1);
    printResult("Best Case:");

    vector<int> worst = worstCase(n);
    resetCounters();
    quickSort(worst, 0, n - 1);
    printResult("Worst Case:");

    return 0;
}
