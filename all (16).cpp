#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int>& a, int l, int r) {
    while (l < r) {
        if (a[l] != a[r])
            return false;

        l++;
        r--;
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

        int l = 0, r = n - 1;

        while (l < r && a[l] == a[r]) {
            l++;
            r--;
        }

        if (l >= r) {
            cout << "YES\n";
            continue;
        }

        bool removeLeft = isPalindrome(a, l + 1, r);
        bool removeRight = isPalindrome(a, l, r - 1);

        if (removeLeft || removeRight)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}