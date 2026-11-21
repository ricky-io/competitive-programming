#include <bits/stdc++.h>
using namespace std;

bool isGood(long long n) {
    if (n < 10) return true;
    string s = to_string(n);
    set<char> distinct;
    for (char c : s) {
        distinct.insert(c);
    }
    return distinct.size() <= 2;
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        long long x;
        cin >> x;
        
        long long y = 2;
        while (true) {
            if (isGood(y) && isGood(x * y)) {
                cout << y << "\n";
                break;
            }
            y++;
            if (y >= 1000000) {
                break;
            }
        }
    }
    
    return 0;
}