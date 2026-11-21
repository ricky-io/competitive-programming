#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){

        int N;
        int64 K;
        cin >> N >> K;

        vector<int64> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        int64 low = 0, high = K;
        int64 prefix = 0;

        for (int i = 0; i < N; i++) {
            if (A[i] > 0) {
                // X <= K - A[i] - prefix
                high = min(high, K - A[i] - prefix);
            } else {
                // X >= -A[i] - prefix
                low = max(low, -A[i] - prefix);
            }

            prefix += A[i];
        }

        if (low <= high)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}