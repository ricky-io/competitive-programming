#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);

    for (ll &x : A) {
        cin >> x;
    }

    sort(A.begin(), A.end());

    int k = lower_bound(A.begin(), A.end(), 0LL) - A.begin();

    int neg = k - 1;

    int pos = k;

    ll cur = 0;
    ll ans = 0;

    while (neg >= 0 || pos < N) {
        bool takeNeg;

        if (neg < 0) {
            takeNeg = false;
        }
        else if (pos >= N) {
            takeNeg = true;
        }
        else {
            ll distNeg = cur - A[neg];
            ll distPos = A[pos] - cur;

            takeNeg = (distNeg <= distPos);
        }

        if (takeNeg) {
            ans += cur - A[neg];
            cur = A[neg];
            --neg;
        }
        else {
            ans += A[pos] - cur;
            cur = A[pos];
            ++pos;
        }
    }

    cout << ans << endl;

    return 0;
}