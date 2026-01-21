#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (isSorted(arr)) {
            cout << 0 << endl;
            continue;
        }

        int operation = 0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j <= i; j++)
                arr[j]++;

            for (int j = i + 1; j < n; j++)
                arr[j]--;

            operation++;

            if (isSorted(arr))
                break;
        }

        cout << operation << endl;
    }
}
