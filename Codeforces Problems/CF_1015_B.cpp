#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    string a = s, b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a != b) {
        cout << -1;
        return 0;
    }

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) continue;

        int j = i + 1;
        while (s[j] != t[i]) j++;

        while (j > i) {
            swap(s[j], s[j - 1]);
            ans.push_back(j);   // 1-based index of the left character
            j--;
        }
    }

    cout << ans.size() << '\n';
    for (int x : ans)
        cout << x << ' ';
}
