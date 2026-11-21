#include <bits/stdc++.h>
using namespace std;

bool can(vector<long long>& A, int l, int r, long long X) {
    int n = A.size();
    int p = lower_bound(A.begin(), A.begin() + l + 1, X) - A.begin();

    if (p > l)
        return false;
    int q = lower_bound(A.begin() + r + 1, A.end(), X) - A.begin();

    int R;

    if (q == n)
        R = n - 1;
    else
        R = q - 1;

    long long surplus = 0;

    for (int i = p; i <= R; i++) {
        surplus += A[i] - X;

        if (surplus < 0)
            return false;
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);

        for (auto &x : A)
            cin >> x;

        int l = -1;

        for (int i = 0; i + 1 < N; i++) {
            if (A[i] > A[i + 1]) {
                l = i;
                break;
            }
        }

        // Already sorted
        if (l == -1) {
            cout << -1 << endl;
            continue;
        }
        int r = -1;

        for (int i = N - 2; i >= 0; i--) {
            if (A[i] > A[i + 1]) {
                r = i;
                break;
            }
        }

        long long lo = 1;
        long long hi = *max_element(A.begin(), A.end());

        long long ans = 0;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;

            if (can(A, l, r, mid)) {
                ans = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}