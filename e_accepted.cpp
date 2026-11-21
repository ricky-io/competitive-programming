#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& x : a) cin >> x;
        
        int LOG = 1;
        while((1 << LOG) <= n) LOG++;
        
        vector<vector<int>> mn(LOG, vector<int>(n));
        vector<vector<int>> mx(LOG, vector<int>(n));
        
        for(int i = 0; i < n; i++) mn[0][i] = mx[0][i] = a[i];
        for(int j = 1; j < LOG; j++)
            for(int i = 0; i+(1<<j)-1 < n; i++) {
                mn[j][i] = min(mn[j-1][i], mn[j-1][i+(1<<(j-1))]);
                mx[j][i] = max(mx[j-1][i], mx[j-1][i+(1<<(j-1))]);
            }
        
        auto qmin = [&](int l, int r) {
            int k = __lg(r-l+1);
            return min(mn[k][l], mn[k][r-(1<<k)+1]);
        };
        auto qmax = [&](int l, int r) {
            int k = __lg(r-l+1);
            return max(mx[k][l], mx[k][r-(1<<k)+1]);
        };
        
        vector<int> no_dup(n);
        {
            unordered_map<int,int> freq;
            int r = -1;
            for(int i = 0; i < n; i++) {
                if(r < i) { r = i-1; freq.clear(); }
                while(r+1 < n && freq.find(a[r+1]) == freq.end()) {
                    r++;
                    freq[a[r]]++;
                }
                no_dup[i] = r - i + 1;
                freq[a[i]]--;
                if(freq[a[i]] == 0) freq.erase(a[i]);
            }
        }
        
        int ans = 0;
        
        for(int L = n/2; L >= 1; L--) {
            if(ans >= L) break;
            unordered_map<int, vector<int>> by_min;
            
            for(int i = 0; i+L-1 < n; i++) {
                if(no_dup[i] < L) continue;
                int lo = qmin(i, i+L-1);
                int hi = qmax(i, i+L-1);
                if(hi - lo == L-1) {
                    by_min[lo].push_back(i);
                }
            }
            
            bool found = false;
            for(auto& [m, starts] : by_min) {
                auto it = by_min.find(m + L);
                if(it == by_min.end()) continue;
                
                auto& A = starts;        // min = m
                auto& B = it->second;    // min = m+L
                
                for(int ai : A) {
                    auto lb = lower_bound(B.begin(), B.end(), ai+L);
                    if(lb != B.end()) { found = true; break; }
                  
                    auto ub = upper_bound(B.begin(), B.end(), ai-L);
                    if(ub != B.begin()) { found = true; break; }
                }
                if(found) break;
            }
            
            if(found) {
                ans = L;
                break;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}