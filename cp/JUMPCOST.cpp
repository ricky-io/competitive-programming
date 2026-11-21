#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N + 1);
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }

        long long best = 0;     
        long long prefixPos = 0;

        for (int j = 2; j <= N; j++) {
            long long candidate = A[j] + 1 - j + prefixPos;
            best = max(best, candidate);
            prefixPos += max<long long>(A[j], 0);
        }

        cout << best << "\n";
    }

    return 0;
}