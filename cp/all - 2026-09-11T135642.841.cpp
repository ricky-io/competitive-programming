#include <bits/stdc++.h>
using namespace std;

int main() {

    long long k, n;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<int> last_seen(30, -1);
    
    int final_or = 0;
    
    for(int i=1; i<=n; i++){
        int temp = x;
        while(temp > 0){
            int bit = __builtin_ctz(temp);
            last_seen[bit] = i;
            temp &= temp-1;
        }
    
        if(i >= k){
            int curr_window_or = 0;
            int window_start = i-k+1;
            
            for(int bit = 0; bit < 30; bit++){
                curr_window_or |= (last_seen[bit] >= window_start) << bit;
            }
            final_or ^= curr_window_or;
        }
        x = (1LL * a * x + b) % c;
    }
    
    cout << final_or << endl;
}