#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> mx, sum0; // segment tree arrays

// returns sum of prefix-max over [l, r] starting from given baseline
long long query(int node, int l, int r, long long baseline) {
    if (baseline >= mx[node]) return baseline * (r - l + 1);
    if (l == r) return max(baseline, mx[node]);
    int mid = (l + r) / 2;
    long long leftSum = query(2 * node, l, mid, baseline);
    long long newBaseline = max(baseline, mx[2 * node]);
    long long rightSum = query(2 * node + 1, mid + 1, r, newBaseline);
    return leftSum + rightSum;
}

void build(int node, int l, int r) {
    if (l == r) {
        mx[node] = n;   // sentinel: value not seen yet
        sum0[node] = n;
        return;
    }
    int mid = (l + r) / 2;
    build(2 * node, l, mid);
    build(2 * node + 1, mid + 1, r);
    mx[node] = max(mx[2 * node], mx[2 * node + 1]);
    sum0[node] = sum0[2 * node] + query(2 * node + 1, mid + 1, r, mx[2 * node]);
}

void update(int node, int l, int r, int pos, long long val) {
    if (l == r) {
        mx[node] = val;
        sum0[node] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) update(2 * node, l, mid, pos, val);
    else update(2 * node + 1, mid + 1, r, pos, val);
    mx[node] = max(mx[2 * node], mx[2 * node + 1]);
    sum0[node] = sum0[2 * node] + query(2 * node + 1, mid + 1, r, mx[2 * node]);
}

int main() {
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    long long sum = 0;

    if (n > 0) {
        mx.assign(4 * n + 5, 0);
        sum0.assign(4 * n + 5, 0);
        build(1, 0, n - 1);

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] >= 0 && a[i] < n) {
                update(1, 0, n - 1, a[i], i);
            }
            long long s = query(1, 0, n - 1, i);
            sum += (long long)n * n - s;
        }
    }

    cout << sum << '\n';
    return 0;
}