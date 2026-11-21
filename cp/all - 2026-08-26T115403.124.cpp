#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<vector<int>> nums(n);
        vector<int> diff(n);

        for (int i = 0; i < n; i++) {

            int m;
            cin >> m;

            nums[i].resize(m);

            for (int j = 0; j < m; j++)
                cin >> nums[i][j];

            sort(nums[i].begin(), nums[i].end());

            diff[i] = nums[i][1] - nums[i][0];
        }

        int base = 0;

        for (int i = 0; i < n; i++)
            base += nums[i][0];

        int best = INT_MIN;

        for (int i = 0; i < n; i++) {

            int sum = base;

            for (int j = 0; j < n; j++) {

                if (i == j)
                    continue;

                sum += diff[j];
            }

            best = max(best, sum);
        }

        cout << best << endl;
    }
}