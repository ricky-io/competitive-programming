#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    long long sum = 0;

    // For each starting index, extend the subarray to the right.
    for (int i = 0; i < n; i++) {
        vector<bool> seen(n + 1, false);
        int mex = 0;

        for (int j = i; j < n; j++) {
            // Values > n can never affect the MEX.
            if (a[j] >= 0 && a[j] <= n) {
                seen[a[j]] = true;
            }

            // Move MEX forward while it exists in the current subarray.
            while (mex <= n && seen[mex]) {
                mex++;
            }

            sum += mex;
        }
    }

    cout << sum << '\n';

    return 0;
}