#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        // Check if all characters are same
        bool allSame = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[0]) {
                allSame = false;
                break;
            }
        }
        
        if (allSame) {
            cout << 1 << "\n";
            continue;
        }
        
        // Check if there exists palindrome of length >= 3
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
            cout << 2 << "\n";
        }
    }
    
    return 0;
}