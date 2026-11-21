#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;

        vector<int> qs;
        int last = 31;

        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;

            if (x < last) {
                qs.push_back(x);
                last = x;
            }
        }

        for (auto &num : a) {
            for (int x : qs) {
                long long p = 1LL << x;

                if (num % p == 0) {
                    num += 1LL << (x - 1);
                }
            }
        }

        for (auto num : a)
            cout << num << " ";

        cout << endl;
    }
    return 0;
}