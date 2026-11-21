#include <bits/stdc++.h>
using namespace std;

int N;
long long K;
vector<long long> L, R;
vector<int> order; 

// check funciton

bool check(long long g) {
    long long lastR = LLONG_MIN / 2; 
    long long count = 0;
    for (int idx : order) {
        long long l = L[idx], r = R[idx];
        if (l >= lastR + g) {
            count++;
            lastR = r;
            if (count >= K) return true; 
        }
    }
    return count >= K;
}

int main(){

    cin >> N >> K;
    L.resize(N); R.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i] >> R[i];
    }
    order.resize(N);
    for (int i = 0; i < N; i++) order[i] = i;
    sort(order.begin(), order.end(), [&](int a, int b){
        return R[a] < R[b];
    });

    if (!check(1)) {
        cout << -1 << "\n";
        return 0;
    }
    
    long long lo = 1, hi = 2000000000LL; 
    long long ans = 1;
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        if (check(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}