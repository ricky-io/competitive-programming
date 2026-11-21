#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    pair<int, int> ans = {-1, -1};

    int i = 0, j = 0;
    unordered_map<int, int> mp;

    while (j < n) {
        mp[nums[j]]++;

        if (mp.size() == k) {
            while (mp[nums[i]] > 1) {
                mp[nums[i]]--;
                i++;
            }

            ans = {i + 1, j + 1};   // 1-based indexing
            break;
        }

        j++;
    }

    cout << ans.first << " " << ans.second << endl;

    return 0;
}