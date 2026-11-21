#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> C(N);

        for (int i = 0; i < N; i++) {
            cin >> C[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                bool possible = true;

                for (int x = 0; x < N; x++) {
                    int dist = min(abs(x - i), abs(x - j));
                    if (dist > K) {
                        possible = false;
                        break;
                    }
                }
                if (possible) {
                    ans = min(ans, C[i] + C[j]);
                }
            }
        }

        if (ans == INT_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}