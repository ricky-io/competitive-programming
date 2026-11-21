#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;

    vector<int> a(n);
    set<int> st;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    vector<int> ans;
    ans.push_back(a[0]);

    for (int x : a) {

        for (int d = 1; d <= (1LL << 30); d <<= 1) {

            bool left = st.count(x - d);
            bool right = st.count(x + d);

            if (left && right) {
                cout << 3 << "\n";
                cout << x - d << " " << x << " " << x + d << "\n";
                return 0;
            }

            if (ans.size() == 1) {

                if (left)
                    ans = {x - d, x};

                if (right)
                    ans = {x, x + d};
            }
        }
    }

    cout << ans.size() << "\n";

    for (auto x : ans)
        cout << x << " ";

    cout << "\n";
}