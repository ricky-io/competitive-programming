#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_prdt(vector<int> &arr) {
    int n = arr.size();
    int cneg = 0; int cpos = 0; int czero = 0;
    int negprdt = 1; int posprdt = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cneg++;
            negprdt *= arr[i];
        }
        else if (arr[i] > 0) {
            cpos++;
            posprdt *= arr[i];
        }
        else {
            czero++;
        }
    }

    if (czero > 0) {
        return 0;
    }
    else if (cneg % 2 == 0) {
        return negprdt * posprdt;
    }
    else {
        int maxneg = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                maxneg = max(maxneg, arr[i]);
            }
        }
        return (negprdt / maxneg) * posprdt;
    }
    
}

int main() {
	int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << min_prdt(arr) << endl;

    return 0;
}