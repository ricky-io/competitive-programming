#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long k, n;
    cin >> n >> k;
    
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    
    vector<long long> v(n);
    
    v[0] = x;
    
    for(int i=1; i<n; i++){
        v[i] = (v[i-1] * a + b) % c;
    }
    
    long long result = 0;
    long long ans = 0;
    
    vector<int> cnt(32);
    
    // calculate first window
    
    for(int i=0; i<k; i++){
        for(int bit = 0; bit < 32; bit++){
            if(v[i] & (1LL << bit)){ // bit exists
                cnt[bit]++;
                result |= (1LL << bit);
            }
        }
    }
    
    ans = result;
    
    // calcuting further answers
    
    for(int i = 0, j = k; j < n; i++, j++){
        // remove a digit
        for(int bit = 0; bit < 32; bit++){
            if(v[i] & (1LL << bit)){
                cnt[bit]--;
                if(cnt[bit] == 0){
                     result &= ~(1LL << bit);
                }
            }
        }
        // add a digit
        
        for(int bit = 0; bit < 32; bit++){
            if(v[j] & (1LL << bit)){
                cnt[bit]++;
                result |= (1LL << bit);
            }
        }
        
        ans ^= result;
    }
    
    cout << ans << endl;

}
