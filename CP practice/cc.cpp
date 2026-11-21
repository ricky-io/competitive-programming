#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        string A, B;
        cin >> N >> A >> B;
        
        // Compress A
        string PA;
        for (char c : A) {
            if (PA.empty() || PA.back() != c) PA.push_back(c);
        }
        
        // Compress B
        string PB;
        for (char c : B) {
            if (PB.empty() || PB.back() != c) PB.push_back(c);
        }
        
        // Check if PB is a subsequence of PA
        int i = 0, j = 0;
        while (i < PA.size() && j < PB.size()) {
            if (PA[i] == PB[j]) j++;
            i++;
        }
        
        cout << (j == PB.size() ? "Yes" : "No") << '\n';
    }
    return 0;
}