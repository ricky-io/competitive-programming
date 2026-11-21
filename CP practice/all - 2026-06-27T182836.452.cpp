#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N, M;
    cin >> N >> M;
    vector<vector<pair<int, int>>> ev(M + 2);
    
    for (int i = 0; i < N; i++) {
        int A, D, B;
        cin >> A >> D >> B;
        if (D > 1) {
            ev[1].push_back({A, 1}); 
            ev[D].push_back({A, -1}); 
        }

        if (D <= M) {
            ev[D].push_back({B, 1});  
            ev[M + 1].push_back({B, -1}); 
        }
    }
    
    unordered_map<int, int> freq; 
    int dist = 0;
    
    for (int day = 1; day <= M; day++) {
       
        for (auto& event : ev[day]) {
            int color = event.first;
            int delta = event.second;
            
            int old_freq = freq[color];
            int new_freq = old_freq + delta;
            
            if (old_freq == 0 && new_freq > 0) {
                dist++;
            } else if (old_freq > 0 && new_freq == 0) {
                dist--;
            }
            
            if (new_freq == 0) {
                freq.erase(color);
            } else {
                freq[color] = new_freq;
            }
        }
        
        cout << dist << "\n";
    }
    
    return 0;
}