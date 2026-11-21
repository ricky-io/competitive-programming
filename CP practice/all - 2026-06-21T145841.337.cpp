#include <bits/stdc++.h>
using namespace std;

// Building and Segment Tree and performing Get_Max function on it;
// Lazy propagation
vector<int> st;
vector<int> lazy;

void build_Tree(int arr[], int i, int lo, int hi){
    if(lo == hi){ 
        st[i] = arr[lo];
        return;
    }
    int mid = lo + (hi-lo)/2;
    build_Tree(arr, 2*i + 1, lo, mid);
    build_Tree(arr, 2*i + 2, mid+1, hi);
    st[i] = max(st[2*i + 1], st[2*i + 2]);
    
}

int get_Max(int i, int lo, int  hi, int l, int r){
    // checlk for pending lazy updates
    if(lazy[i] != 0){
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize*lazy[i];
        if(lo != hi){ // send lazy to left and right side
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(r < lo || l>hi) return INT_MIN;
    if(lo >= l && hi <= r) return st[i];
    
    int mid = lo + (hi - lo)/2;
    int leftTree = get_Max(2*i+1, lo, mid, l, r);
    int rightTree = get_Max(2*i+2, mid+1, hi, l, r);
    return max(leftTree, rightTree);
}

void updateRange(int i, int lo, int hi, int r, int l, int val){
    // checlk for pending lazy updates
    if(lazy[i] != 0){
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize*lazy[i];
        if(lo != hi){ // send lazy to left and right side
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    
    if(l > hi || r<lo) return;
    if(lo >= l && hi <= r){ // update entire lo, hi
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize*val;
        if(lo != hi){ // send lazy to left and rght
            lazy[2*i+1] += val;
            lazy[2*i+2] += val;
        }
        return;
    }
    int mid = lo + (hi - lo)/2;
    updateRange(2*i+1, lo, mid, l, r, val);
    updateRange(2*i+2, mid+1, hi, l, r, val);
    st[i] = max(st[2*i+1], st[2*i+2]);
}

int main() {
	int arr[] = {9, 4, 6, 8, 4, 3, 2};
	int n = 7;
	st.resize(4*n);
	lazy.resize(4*n, 0);
	build_Tree(arr, 0, 0 , n-1);
	int l,r;
	cin>>l>>r;
	cout<<get_Max(0, 0, n-1, 1, 3)<<endl;
	updateRange(0, 0, n-1, 2, 5, 12);
	cout<<get_Max(0, 0, n-1, 1, 3)<<endl;

	
	

}
