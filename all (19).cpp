#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int x) {
    int l = 0;
    int r = a.size() - 1;

    while (l < r) {
        // Ignore elements equal to x
        if (a[l] == x) {
            l++;
        }
        else if (a[r] == x) {
            r--;
        }
        else {
            if (a[l] != a[r])
                return false;

            l++;
            r--;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0;
        int r = n - 1;

        // Find the first mismatch
        while (l < r && a[l] == a[r]) {
            l++;
            r--;
        }

        // Already a palindrome
        if (l >= r) {
            cout << "YES\n";
            continue;
        }

        // At the first mismatch, one of these two
        // values must be the value we remove.
        int x = a[l];
        int y = a[r];

        if (check(a, x) || check(a, y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}