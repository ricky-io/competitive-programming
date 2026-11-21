#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int Q;
    ll V;
    cin >> Q >> V;

    priority_queue<ll> pq;

    while (Q--) {
        int type;
        ll t;
        cin >> type >> t;

        if (type == 1) {
            ll w;
            cin >> w;

            pq.push(w - t);
        }
        else {
            if (pq.empty()) {
                cout << -1 << '\n';
                continue;
            }

            ll key = pq.top();
            pq.pop();

            ll charge = min(V, key + t);

            cout << charge << endl;
        }
    }

    return 0;
}