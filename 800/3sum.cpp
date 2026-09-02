#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    set<vector<int>> st;

    for (int i = 0; i < n; i++) {

        int target = -arr[i];

        int low = i + 1;
        int high = n - 1;

        while (low < high) {

            int currSum = arr[low] + arr[high];

            if (currSum == target) {

                vector<int> temp = {arr[i], arr[low], arr[high]};
                st.insert(temp);

                low++;
                high--;
            }
            else if (currSum < target) {
                low++;
            }
            else {
                high--;
            }
        }
    }

    for (auto it : st) {
        for (auto x : it) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}