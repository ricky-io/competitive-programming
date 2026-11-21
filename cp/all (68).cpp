#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 998244353;

// Fast exponentiation
int power(int a, int b) {
    int res = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

// Modular inverse
int modInverse(int x) {
    return power(x, MOD - 2);
}

int am(vector<int> &a, int l, int r) {
    int sum = 0;

    for (int i = l; i <= r; i++) {
        sum = (sum + a[i]) % MOD;
    }

    int len = r - l + 1;

    return (sum * modInverse(len)) % MOD;
}

signed main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ans = (ans + am(a, i, j)) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}