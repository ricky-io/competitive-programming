#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long k = 2;

        while (true) {
            unordered_set<long long> st;

            for (int i = 0; i < n; i++) {
                st.insert(a[i] % k);
            }

            if (st.size() >= 2) {
                break;
            }
            k *= 2;
        }

        cout << k << endl;
    }

    return 0;
}
