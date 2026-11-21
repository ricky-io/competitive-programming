#include <bits/stdc++.h>
using namespace std;

vector<int> tree;
vector<int> a;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;

        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);

        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

void update(int v, int tl, int tr, int pos, int val) {
    if (tl == tr) {
        tree[v] = val;
    } else {
        int tm = (tl + tr) / 2;

        if (pos <= tm) {
            update(v * 2, tl, tm, pos, val);
        } else {
            update(v * 2 + 1, tm + 1, tr, pos, val);
        }

        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

int find_kth(int v, int tl, int tr, int k) {
    if (tl == tr) {
        return tl;
    }

    int tm = (tl + tr) / 2;

    int left_sum = tree[v * 2];

    if (k <= left_sum) {
        return find_kth(v * 2, tl, tm, k);
    } else {
        return find_kth(v * 2 + 1, tm + 1, tr, k - left_sum);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    a.resize(n);
    tree.resize(4 * n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    build(1, 0, n - 1);

    while (m--) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            update(1, 0, n - 1, x, 1);
        } else {
            cout << find_kth(1, 0, n - 1, x + 1) << endl;
        }
    }

    return 0;
}