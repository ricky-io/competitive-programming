#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, s;
    cin >> n >> k >> s;

    if (s < k || s > (n - 1) * k) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long cur = 1;

    while (k--) {
        long long d = min(s - k, n - 1);

        if (cur + d <= n)
            cur += d;
        else
            cur -= d;

        cout << cur << " ";
        s -= d;
    }
}