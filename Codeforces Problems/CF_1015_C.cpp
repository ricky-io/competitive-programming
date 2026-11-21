#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> dif;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        sum += a;
        dif.push_back(a - b);
    }

    sort(dif.rbegin(), dif.rend());

    int ans = 0;
    for (int x : dif) {
        if (sum <= m) break;
        sum -= x;
        ans++;
    }

    if (sum > m)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
}
