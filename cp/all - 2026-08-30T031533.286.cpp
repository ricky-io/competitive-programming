#include <bits/stdc++.h>
using namespace std;

struct node{
    int cnt;
};

vector<node> st;
vector<int> a;

void build_tree(int i, int l, int r){
    if(l == r){
        st[i].cnt = a[l];
        return;
    }
    
    int m = l + (r - l) / 2;
    build_tree(2*i+1, l, m);
    build_tree(2*i+2, m+1, r);
    
    st[i].cnt = st[2*i+1].cnt + st[2*i+2].cnt;
}

void update(int i, int l, int r, int idx){
    if(l == r){
        st[i].cnt = 1 - st[i].cnt;
        return;
    }
    
    int m = l + (r-l)/2;
    
    if(idx <= m) update(2*i+1, l, m, idx);
    else update(2*i+2, m+1, r, idx);
    
    st[i].cnt = st[2*i+1].cnt + st[2*i+2].cnt;
}

int find_k(int i, int lo, int hi, int k){
    if (lo == hi)
    return lo;

    int mid = lo + (hi - lo) / 2;

    int leftCount = st[2 * i + 1].cnt;

    if (k < leftCount)
        return find_k(2 * i + 1, lo, mid, k);
    else
        return find_k(2 * i + 2, mid + 1, hi, k - leftCount);
}

int main() {
	int n, m;
	cin >> n >>m;
	
	a.resize(n);
	st.resize(4*n);
	
	for(int i=0; i<n; i++) cin >> a[i];
	
	build_tree(0, 0, n-1);
	
	while(m--){
	    int i, k;
	    cin >> i >> k;
	    
	    if(i == 1) update(0, 0, n-1, k);
	    else cout << find_k(0, 0, n-1, k) << endl;
	}

}
