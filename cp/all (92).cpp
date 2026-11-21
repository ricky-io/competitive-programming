#include <bits/stdc++.h>
using namespace std;

vector<long long> st;

void buildTree(vector<long long>& a, int i, int lo, int hi) {
    if (lo == hi) {
        st[i] = a[lo];
        return;
    }

    int mid = lo + (hi - lo) / 2;

    buildTree(a, 2 * i + 1, lo, mid);
    buildTree(a, 2 * i + 2, mid + 1, hi);

    st[i] = st[2 * i + 1] ^ st[2 * i + 2];
}

long long get_xor(int i, int lo, int hi) {
    if (lo == hi) {
        return st[i];
    }

    int mid = lo + (hi - lo) / 2;

    return get_xor(2 * i + 1, lo, mid) ^
           get_xor(2 * i + 2, mid + 1, hi);
}

void update(int i, int lo, int hi, int pos) {
    if (lo == hi) {
        st[i]++;
        return;
    }

    int mid = lo + (hi - lo) / 2;

    if (pos <= mid) {
        update(2 * i + 1, lo, mid, pos);
    } else {
        update(2 * i + 2, mid + 1, hi, pos);
    }

    st[i] = st[2 * i + 1] ^ st[2 * i + 2];
}

void decreaseAll(int i, int lo, int hi) {
    if (lo == hi) {
        if (st[i] > 0) {
            st[i]--;
        }
        return;
    }

    int mid = lo + (hi - lo) / 2;

    decreaseAll(2 * i + 1, lo, mid);
    decreaseAll(2 * i + 2, mid + 1, hi);

    st[i] = st[2 * i + 1] ^ st[2 * i + 2];
}

int main() {

    int n, q;
    cin >> n >> q;

    vector<long long> a(n, 0);

    st.resize(4 * n);

    buildTree(a, 0, 0, n - 1);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;

            // x is 1-indexed
            --x;

            update(0, 0, n - 1, x);
        }
        else {
            decreaseAll(0, 0, n - 1);
        }

        cout << get_xor(0, 0, n - 1) << endl;
    }

    return 0;
}