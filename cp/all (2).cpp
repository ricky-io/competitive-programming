#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n + 1);
        unordered_set<int> st;

        for (int i = 1; i <= n; i++)
            cin >> nums[i];

        bool done = false;

        for (int i = 1; i <= n; i++) {

            if (st.count(i)) {
                cout << st.size() << '\n';
                done = true;
                break;
            }

            st.insert(nums[i]);
        }

        if (!done)
            cout << st.size() << '\n';
    }

    return 0;
}