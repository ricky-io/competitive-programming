#include <bits/stdc++.h>
using namespace std;

vector<int> st;

void build_tree(vector<int> &a, int i, int lo, int hi){
    if(lo == hi){
        st[i] = a[lo];
        return;
    }
    
    int mid = lo + (hi - lo) / 2;
    build_tree(a, 2*i+1, lo, mid);
    build_tree(a, 2*i+2, mid+1, hi);
    
    st[i] = min(st[2*i+1] , st[2*i+2]);
}

void update(int i, int lo, int hi, int idx, int val){
    if(idx < lo || idx > hi) return;
    if(lo == hi){
        st[i] = val;
        return;
    }
    
    int mid = lo + (hi - lo) / 2;
    if(idx <= mid) update(2*i+1, lo, mid, idx, val);
    else update(2*i+2, mid+1, hi, idx, val);
    
    st[i] = min(st[2*i+1], st[2*i+2]);
}

int get_min(int i, int lo, int hi, int l, int r){
    if(l > hi || r < lo) return INT_MAX;
    if(lo >= l && hi <= r) return st[i];
    
    int mid = lo + (hi - lo)/2;
    
    return min(get_min(2*i+1, lo, mid, l, r), get_min(2*i+2, mid+1, hi, l, r));
}

int main() {
	int n, q;
	cin >> n >> q;
	
	vector<int> a(n);
	for(int i=0; i<n; i++){
	    cin >> a[i];
	}
	
	st.resize(4*n);
	build_tree(a, 0, 0, n-1);
	
	while(q--){
	    int a, x, y;
	    cin >> a >> x >> y;
	    
	    if(a == 1) update(0, 0, n-1, x, y);
	    else cout << get_min(0, 0, n-1, x, y-1) << endl;
	}
	
	return 0;

}
