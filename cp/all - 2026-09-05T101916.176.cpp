#include <bits/stdc++.h>
using namespace std;

vector<long long> st;
vector<long long> nums;

void build_tree(int i, int lo, int hi){
    if(lo == hi) {
        st[i] = nums[lo];
        return;
    }
    
    int mid = lo + (hi - lo)/2;
    
    build_tree(2*i+1, lo, mid);
    build_tree(2*i+2, mid+1, hi);
    
    st[i] = min(st[2*i+1], st[2*i+2]);
}

int min_el(int i, int lo, int hi, int l, int r){
    if(r < lo || l > hi) return INT_MAX;
    if(lo == hi){
        return st[i];
    }
    
    int mid = lo + (hi - lo)/2;
    int left = min_el(2*i+1, lo, mid, l, r);
    int right = min_el(2*i+2, mid+1, hi, l, r);
    
    return min(left, right);
}

int main() {
    
    long long n, k;
    cin >> n >> k;
    
    st.resize(4*n);
    nums.resize(n);
    
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    
    nums[0] = x;
    
    for(int i=1; i<n; i++){
        nums[i] = ((a * nums[i-1]) + b) % c;
    }
    
    build_tree(0, 0, n-1);
    
    int i=k-1, j=0;
    
    if(n == k){
        cout << min_el(0, 0, n-1, j, i) << "\n";
        return 0;
    }
    
    long long result = min_el(0, 0, n-1, j, i) ^ min_el(0, 0, n-1, j+1, i+1);
    
    i+=2; j+=2;
    
    while(i < n){
        result = result ^ min_el(0, 0, n-1, j, i);
        i++;
        j++;
    }
    
    cout << result << "\n";
    return 0;
        
    
}
