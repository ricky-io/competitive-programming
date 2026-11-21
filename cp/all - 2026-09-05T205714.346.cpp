#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long countOdd = 0, countA = 0, countB = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x % 2 != 0) {
                countOdd++;
            } else {
                if (x % 4 == 0) countA++;
                else countB++;
            }
        }

        long long answer = max({countOdd, countA, countB});
        cout << answer << "\n";
    }

    return 0;
}