#include <bits/stdc++.h>
using namespace std;

const int MAXV = 1000;

int f(long long x) {
    int s = 0;
    while (x > 0) {
        int d = x % 10;
        s += d * d;
        x /= 10;
    }
    return s;
}

int freq[MAXV];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        for (auto &x : a) scanf("%lld", &x);

        memset(freq, 0, sizeof(freq));

        for (int i = 0; i < n; i++) {
            long long v = a[i];
            for (int step = 0; step < 100; step++) {
                v = f(v);
            }
            freq[v]++;
        }

        long long ans = 0;
        for (int v = 0; v < MAXV; v++) {
            long long c = freq[v];
            ans += c * (c - 1) / 2;
        }
        cout << ans << endl;
    }
}