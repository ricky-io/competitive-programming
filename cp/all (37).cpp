#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> skill(n);
    vector<int> sorted;

    for (int i = 0; i < n; i++) {
        cin >> skill[i];
        sorted.push_back(skill[i]);
    }

    sort(sorted.begin(), sorted.end());

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        ans[i] = lower_bound(sorted.begin(), sorted.end(), skill[i]) - sorted.begin();
    }

    while (k--) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;

        if (skill[u] > skill[v])
            ans[u]--;
        else if (skill[v] > skill[u])
            ans[v]--;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}