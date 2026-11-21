#include <bits/stdc++.h>
using namespace std;

// --------- YOUR FUNCTION ----------
int solve(vector<int>& nums) {
    // Example: print sum
    int sum = 0;
    for(int x : nums) sum += x;
    return sum;
}

// --------- MAIN FUNCTION ----------
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = solve(nums);

    cout << "Output: " << result << endl;

    return 0;
}
