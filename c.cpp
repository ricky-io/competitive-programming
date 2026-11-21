#include <bits/stdc++.h>

using namespace std;

int n, limit, best = 0;
vector < int > skill;
vector < pair < int, int >> friends, rivals;

void dfs(int i, int mask, int sum, int cnt) {
    if (sum > limit) return;
    if (i == n) {
        for (auto & f: friends)
            if (((mask >> f.first) & 1) != ((mask >> f.second) & 1)) return;
        for (auto & r: rivals)
            if (((mask >> r.first) & 1) && ((mask >> r.second) & 1)) return;
        best = max(best, cnt);
        return;
    }
    dfs(i + 1, mask, sum, cnt);
    dfs(i + 1, mask | (1 << i), sum + skill[i], cnt + 1);
}

int main() {
    cin >> n;
    vector < string > names(n);
    unordered_map < string, int > id;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
        id[names[i]] = i;
    }
    skill.resize(n);
    for (int i = 0; i < n; i++) cin >> skill[i];

    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        string a, b;
        cin >> a >> b;
        friends.push_back({
            id[a],
            id[b]
        });
    }
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        string a, b;
        cin >> a >> b;
        rivals.push_back({
            id[a],
            id[b]
        });
    }
    cin >> limit;

    dfs(0, 0, 0, 0);
    cout << best << endl;
    return 0;
}