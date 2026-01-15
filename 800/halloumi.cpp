#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int t = 0; t < num; t++) {
        int size, k;
        cin >> size >> k;

        vector<int> arr(size);
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        if (k == 1) {
            vector<int> temp = arr;   // copy the array
            sort(arr.begin(), arr.end());

            if (arr == temp)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
