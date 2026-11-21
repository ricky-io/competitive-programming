#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    unordered_set<int> seen;
    vector<int> ans;

    for(int i = n - 1; i >= 0; i--) {
        if(!seen.count(a[i])) {
            seen.insert(a[i]);
            ans.push_back(a[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    for(int x : ans)
        cout << x << " ";

    return 0;
}