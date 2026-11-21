#include <bits/stdc++.h>
using namespace std;

vector<long long> st;

void buildTree(vector<int> &a, int i, int lo, int hi){
    if(lo == hi){
        st[i] = a[lo];
        return;
    }
    
    int mid = lo + (hi - lo) / 2;
    buildTree(a, 2*i+1, lo, mid);
    buildTree(a, 2*i+2, mid+1, hi);
    
    st[i] = st[2*i+1] + st[2*i+2];
}

long long getSum(int i, int lo, int hi, int l, int r) {
    // No overlap
    if (l > hi || r < lo)
        return 0;

    // Complete overlap
    if (lo >= l && hi <= r)
        return st[i];

    int mid = lo + (hi - lo) / 2;

    return getSum(2 * i + 1, lo, mid, l, r) + getSum(2 * i + 2, mid + 1, hi, l, r);
}

void update(int i, int lo, int hi, int idx, int val) {
   
    if (idx < lo || idx > hi) return;

    // Leaf node
    if (lo == hi) {
        st[i] = val;
        return;
    }

    int mid = lo + (hi - lo) / 2;

    if (idx <= mid)
        update(2 * i + 1, lo, mid, idx, val);
    else
        update(2 * i + 2, mid + 1, hi, idx, val);

    st[i] = st[2 * i + 1] + st[2 * i + 2];
}


int main() {
	int n, q;
	cin >> n >> q;
	
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	
	st.resize(4*n);
	buildTree(a, 0, 0, n-1);
	
	while(q--){
	    int i, l , r;
	    cin >> i >> l >> r;
	    if(i == 1) update(0, 0, n-1, l, r);
	    else cout << getSum(0, 0, n-1, l, r-1) << endl;
	}
	
	return 0;
}
