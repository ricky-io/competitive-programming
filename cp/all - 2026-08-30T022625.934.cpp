#include <bits/stdc++.h>
using namespace std;

struct Node{
    int sum;
    int pref;
    int suf;
    int ans;
};


vector<Node> st;
vector<int> a;

Node merge(Node prev, Node next){
    Node result;
    result.ans = max({prev.ans, next.ans, prev.suf+next.pref});
    result.pref = max(prev.pref, prev.sum + next.pref);
    result.suf = max(next.suf, next.sum + prev.suf);
    result.sum = prev.sum + next.sum;
    
    return result;
}

void build_tree(int i, int lo, int hi){
    if(lo == hi){
        int x = a[lo];
        st[i].sum = x;
        st[i].pref = max(0, x);
        st[i].suf = max(0, x);
        st[i].ans = max(0, x);
        return;
    }
    
    int mid = lo + (hi - lo)/2;
    
    build_tree(2*i+1, lo, mid);
    build_tree(2*i+2, mid+1, hi);
    
    st[i] = merge(st[2*i+1], st[2*i+2]);
}

void update(int i, int lo, int hi, int idx, int val){
    if(lo == hi){
        st[i].sum = val;
        st[i].pref = max(0, val);
        st[i].suf = max(0, val);
        st[i].ans = max(0, val);
        return;
    }
    
    int mid = lo + (hi - lo)/2;
    if(idx <= mid) update(2*i+1, lo, mid, idx, val);
    else update(2*i+2, mid+1, hi, idx, val);
    
    st[i] = merge(st[2*i+1], st[2*i+2]);
}

int main() {
    int n, m;
    cin >> n >> m;
    
    a.resize(n);
    st.resize(4*n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    
    build_tree(0, 0, n-1);
    
    cout << st[0].ans << endl;
    
    while(m--){
        int i, v;
        cin >> i >> v;
        update(0, 0, n-1, i, v);
        cout << st[0].ans << endl;
    }
	

}
