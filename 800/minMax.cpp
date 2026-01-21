#include <bits/stdc++.h>
using namespace std;

void minMax(vector<int>& arr) {

    int mini = INT_MAX;
    int maxi = INT_MIN;
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] < mini) {
            mini = arr[i];
            cnt1++;
        }

        if (arr[i] > maxi) {
            maxi = arr[i];
            cnt2++;
        }
    }

    cout << "cnt1 : " << cnt1 << endl;
    cout << "cnt2 : " << cnt2 << endl;
}

int main() {

    int n = 1000;

    
    vector<int> best(n);
    for (int i = 0; i < n; i++)
        best[i] = i;

    cout << "best: ";
    minMax(best);

   
    vector<int> worst(n);
    for (int i = 0; i < n; i++)
        worst[i] = n - 1 - i;

    cout << "worst: ";
    minMax(worst);

    vector<int>avg(n);
    for(int i =0 ; i < n ; i++ ){
        avg[i] = i ; 

    }

    random_shuffle(avg.begin() , avg.end()) ; 


    cout << "avg : " << endl ; 
    minMax(avg) ; 

    return 0 ; 
}
