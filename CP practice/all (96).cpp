#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    int maxSatisfaction(vector<int>& satisfaction) {

        // Sort the array
        sort(satisfaction.begin(), satisfaction.end());

        int suffixSum = 0;
        int total = 0;

        // Traverse from end
        for(int i = satisfaction.size() - 1; i >= 0; i--) {

            suffixSum += satisfaction[i];

            // Stop if adding decreases result
            if(suffixSum <= 0)
                break;

            total += suffixSum;
        }

        return total;
    }
};

int main() {

    int n;

  //  cout << "Enter number of dishes: ";
    cin >> n;

    vector<int> satisfaction(n);

//    cout << "Enter satisfaction values:\n";

    for(int i = 0; i < n; i++) {
        cin >> satisfaction[i];
    }

    Solution obj;

    int result = obj.maxSatisfaction(satisfaction);

    cout << result << endl;

    return 0;
}
