#include <bits/stdc++.h>
using namespace std;

struct Node {
    int mn;
    int cnt;
};

vector<Node> st;

Node merge(Node a, Node b) {
    if (a.mn < b.mn)
        return a;
    if (a.mn > b.mn)
        return b;

    return {a.mn, a.cnt + b.cnt};
}

void build(vector<int> &a, int i, int lo, int hi) {
    if (lo == hi) {
        st[i] = {a[lo], 1};
        return;
    }

    int mid = lo + (hi - lo) / 2;

    build(a, 2 * i + 1, lo, mid);
    build(a, 2 * i + 2, mid + 1, hi);

    st[i] = merge(st[2 * i + 1], st[2 * i + 2]);
}

void update(int i, int lo, int hi, int idx, int val) {
    if (idx < lo || idx > hi)
        return;

    if (lo == hi) {
        st[i] = {val, 1};
        return;
    }

    int mid = lo + (hi - lo) / 2;

    if (idx <= mid)
        update(2 * i + 1, lo, mid, idx, val);
    else
        update(2 * i + 2, mid + 1, hi, idx, val);

    st[i] = merge(st[2 * i + 1], st[2 * i + 2]);
}

Node query(int i, int lo, int hi, int l, int r) {
    // No overlap
    if (r < lo || hi < l)
        return {INT_MAX, 0};

    // Complete overlap
    if (l <= lo && hi <= r)
        return st[i];

    int mid = lo + (hi - lo) / 2;

    Node left = query(2 * i + 1, lo, mid, l, r);
    Node right = query(2 * i + 2, mid + 1, hi, l, r);

    return merge(left, right);
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    st.resize(4 * n);

    build(a, 0, 0, n - 1);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int idx, val;
            cin >> idx >> val;
            update(0, 0, n - 1, idx, val);
        }
        else {
            int l, r;
            cin >> l >> r;

            Node ans = query(0, 0, n - 1, l, r - 1);

            cout << ans.mn << " " << ans.cnt << '\n';
        }
    }

    return 0;
}