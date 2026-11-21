#include <bits/stdc++.h>
using namespace std;

struct Node{
    int maxi;
};

vector<Node> st;
vector<int> a;

void build_tree(int i, int lo, int hi){
    if(lo == hi){
        st[i].maxi = a[lo];
        return;
    }
    
    int mid = lo + (hi - lo)/2;
    
    build_tree(2*i+1, lo, mid);
    build_tree(2*i+2, mid+1, hi);
    
    st[i].maxi = max(st[2*i+1].maxi, st[2*i+2].maxi);
}

void update(int i, int lo, int hi, int idx, int val){
    if(lo == hi){
        st[i].maxi = val;
        return;
    }
    
    int mid = lo + (hi - lo)/2;
    
    if(idx <= mid) update(2*i+1, lo, mid, idx, val);
    else update(2*i+2, mid+1, hi, idx, val);
    
    st[i].maxi = max(st[2*i+1].maxi, st[2*i+2].maxi);
}

int find_above(int i, int lo, int hi, int x){
    if(st[i].maxi < x) return -1;
    
    if(lo == hi) return lo;
    
    int mid = lo + (hi - lo)/2;
    
    
    if(st[2*i+1].maxi >= x) return find_above(2*i+1, lo, mid, x);
    else return find_above(2*i+2, mid+1, hi, x);
}

int main() {
    
    int n, m;
    cin >> n >> m;
    
    st.resize(4*n);
    a.resize(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    
    build_tree(0, 0, n-1);
    
    while(m--){
        int type;
        cin >> type;
        
        if(type == 1) {
            int idx, val;
            cin >> idx >> val;
            update(0, 0, n-1, idx, val);
        }
        else {
            int x;
            cin >> x;
            cout << find_above(0, 0, n-1, x) << endl;
        }
    }
	

}
