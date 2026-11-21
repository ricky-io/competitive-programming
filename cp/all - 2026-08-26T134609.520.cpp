#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> getTop3(vector<int>& v) {
    vector<pair<int, int>> top;

    for (int i = 0; i < v.size(); i++) {
        top.push_back({v[i], i});
    }

    sort(top.rbegin(), top.rend());

    top.resize(3);

    return top;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        for (int &x : c) cin >> x;

        auto A = getTop3(a);
        auto B = getTop3(b);
        auto C = getTop3(c);

        long long ans = 0;

        for (auto [va, ia] : A) {
            for (auto [vb, ib] : B) {
                for (auto [vc, ic] : C) {

                    if (ia != ib && ia != ic && ib != ic) {
                        ans = max(ans, 1LL * va + vb + vc);
                    }
                }
            }
        }

        cout << ans << endl;
    }
}