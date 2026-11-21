#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long> a, int L, int R, long long X) {
    long long S = 0;
    for (int i = L; i <= R; i++) {

        if (a[i] >= X) {
            S += a[i] - X;
            a[i] = X;
        }
        else {
            long long take = min(S, X - a[i]);

            a[i] += take;
            S -= take;
        }
    }

    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
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

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long ans = -1;

        for (long long X = 1; X <= 1000; X++) {

            for (int L = 0; L < N; L++) {
                for (int R = L; R < N; R++) {

                    if (check(A, L, R, X)) {
                        ans = max(ans, X);
                    }
                }
            }
        }

        cout << ((ans == 1000) ? -1 : ans) << endl;
    }

    return 0;
}