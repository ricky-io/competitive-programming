#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_set<int> st;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    // Default answer: any one element
    vector<int> ans = {a[0]};

    for (int i = 0; i < n; i++) {
        int x = a[i];

        for (int k = 0; k <= 30; k++) {
            int d = 1LL << k;

            bool first = st.count(x + d);
            bool second = st.count(x + 2 * d);

            // Found a triple
            if (first && second) {
                cout << 3 << "\n";
                cout << x << " " << x + d << " " << x + 2 * d << "\n";
                return 0;
            }

            // Found a pair
            if (first && ans.size() < 2) {
                ans = {x, x + d};
            }
        }
    }

    cout << ans.size() << "\n";
    for (int x : ans)
        cout << x << " ";
    cout << "\n";

    return 0;
}