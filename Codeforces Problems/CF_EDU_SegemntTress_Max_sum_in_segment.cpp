#include <bits/stdc++.h>
using namespace std;

struct Node{
    long long sum;
    long long pref;
    long long suf;
    long long ans;
};

vector<Node> st;
vector<long long> a;

Node merge(Node left, Node right){
    Node res;
    res.sum = left.sum + right.sum;
    res.pref = max(left.pref, left.sum+right.pref);
    res.suf = max(right.suf, right.sum+left.suf);
    res.ans = max({left.ans, right.ans, left.suf+right.pref});
    
    return res;
}

void build_tree(int i, int l, int r){
    if(l == r){ // leaf node;
        long long x = a[l];
        st[i].sum = x;
        st[i].pref = max(0LL, x);
        st[i].suf = max(0LL, x);
        st[i].ans = max(0LL, x);
        
        return;
    }
    int mid = l + (r-l)/2;
    build_tree(2*i+1, l, mid);
    build_tree(2*i+2, mid+1, r);
    
    st[i] = merge(st[2*i+1], st[2*i+2]);
}

void update(int i, int l, int r, int idx, long long val){
    if(l == r){
        st[i].sum = val;
        st[i].pref = max(0LL, val);
        st[i].suf = max(0LL, val);
        st[i].ans = max(0LL, val);
        return;
    }
    int mid = l + (r-l)/2;
    if(idx <= mid){
        update(2*i+1, l, mid, idx, val);
    } else update (2*i+2, mid+1, r, idx, val);
    
    st[i] = merge(st[2*i+1], st[2*i+2]);
}
int main() {
    
    long long n, m;
    cin >> n >> m;
    
    a.resize(n);
    st.resize(4*n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    
    build_tree(0, 0, n-1);
    
    cout << st[0].ans << endl;
    
    while(m--){
        int idx; long long val;
        cin >> idx >> val;
        
        update(0, 0, n-1, idx, val);
        
        cout << st[0].ans << endl;
    }
	
	return 0;

}
