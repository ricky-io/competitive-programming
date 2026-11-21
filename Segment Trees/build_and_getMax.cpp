#include <bits/stdc++.h>
using namespace std;

// Building and Segment Tree and performing Get_Max function on it;
vector<int> st;

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

int get_Max(int i, int lo, int  hi, int& l, int& r){
    if(r < lo || l>hi) return INT_MIN;
    if(lo >= l && hi <= r) return st[i];
    
    int mid = lo + (hi - lo)/2;
    int leftTree = get_Max(2*i+1, lo, mid, l, r);
    int rightTree = get_Max(2*i+2, mid+1, hi, l, r);
    return max(leftTree, rightTree);
}

int main() {
	int arr[] = {9, 4, 6, 8, 4, 3, 2};
	int n = 7;
	st.resize(4*n);
	build_Tree(arr, 0, 0 , n-1);
	int l,r;
	cin>>l>>r;
	cout<<get_Max(0, 0, n-1, l, r)<<endl;
	

}
