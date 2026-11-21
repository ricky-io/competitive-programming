#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> P(n + 1), Q(n + 1); 
    for (int i = 1; i <= n; i++) {
        cin >> P[i];
        Q[P[i]] = i;
    }

    bool inv = false;

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x, y;
            cin >> x >> y;
            if (!inv) {
                int a = P[x], b = P[y];
                swap(P[x], P[y]);
                swap(Q[a], Q[b]);
            } else {
                int c = Q[x], d = Q[y];
                swap(Q[x], Q[y]);
                swap(P[c], P[d]);
            }
        } else {
            inv = !inv;
        }
    }

    vector<int> &ans = inv ? Q : P;
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " \n"[i == n];
    }
    return 0;
}