#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long w;
    cin >> n >> w;

    long long sum = 0;
    long long mn = 0;
    long long mx = 0;

    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sum += x;
        mn = min(mn, sum);
        mx = max(mx, sum);
    }

    long long L = -mn;
    long long R = w - mx;

    if(L > R)
        cout << 0 << endl;
    else
        cout << R - L + 1 << endl;
}