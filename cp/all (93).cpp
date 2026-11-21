#include <bits/stdc++.h>
using namespace std;

int N, Q;
int A[500005];       // actual array values
int seg[2000005];    // segment tree: stores max value in range
long long xorTotal = 0;

// increase A[pos] by 1
void update(int node, int l, int r, int pos) {
    if (l == r) {
        int oldVal = A[pos];
        A[pos] = oldVal + 1;
        xorTotal = xorTotal ^ oldVal ^ A[pos];   // update running xor
        seg[node] = A[pos];
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid)
        update(node * 2, l, mid, pos);
    else
        update(node * 2 + 1, mid + 1, r, pos);

    seg[node] = max(seg[node * 2], seg[node * 2 + 1]);
}

// decrease every positive value in [l,r] by 1
void decreaseAll(int node, int l, int r) {
    if (seg[node] == 0) {
        // everything in this range is already 0, nothing to do here
        return;
    }
    if (l == r) {
        int oldVal = A[l];
        A[l] = oldVal - 1;
        xorTotal = xorTotal ^ oldVal ^ A[l];     // update running xor
        seg[node] = A[l];
        return;
    }
    int mid = (l + r) / 2;
    decreaseAll(node * 2, l, mid);
    decreaseAll(node * 2 + 1, mid + 1, r);
    seg[node] = max(seg[node * 2], seg[node * 2 + 1]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> Q;

    for (int q = 0; q < Q; q++) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            update(1, 1, N, x);
        } else {
            decreaseAll(1, 1, N);
        }

        cout << xorTotal << "\n";
    }

    return 0;
}