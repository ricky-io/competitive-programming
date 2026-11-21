#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        // If n == 1, answer is 1
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }
        
        bool hasPalindrome = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 2; j < n; j++) {
                if (s[i] == s[j]) {
                    hasPalindrome = true;
                    break;
                }
            }
            if (hasPalindrome) break;
        }
        
        if (hasPalindrome) {
            cout << 1 << "\n";
        } else {
            bool allSame = true;
            for (int i = 1; i < n; i++) {
                if (s[i] != s[0]) {
                    allSame = false;
                    break;
                }
            }
            if (allSame) {
                cout << 1 << "\n";
            } else {
                cout << 2 << "\n";
            }
        }
    }
    
    return 0;
}