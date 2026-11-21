#include <iostream>
#include <vector>
using namespace std;

void cyclicSort(vector<int>& arr) {
    int i = 0;
    while (i < arr.size()) {
        int correct = arr[i] - 1;
        if (arr[i] != arr[correct]) {
            swap(arr[i], arr[correct]);
        } else {
            i++;
        }
    }
}
