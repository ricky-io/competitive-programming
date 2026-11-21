#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector < string > names(n);
    unordered_map < string, int > id;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
        id[names[i]] = i;
    }

    vector < int > skill(n);
    for (int i = 0; i < n; i++) cin >> skill[i];

    int n1;
    cin >> n1;
    vector < pair < int, int >> friends(n1);
    for (int i = 0; i < n1; i++) {
        string a, b;
        cin >> a >> b;
        friends[i] = {
            id[a],
            id[b]
        };
    }

    int n2;
    cin >> n2;
    vector < pair < int, int >> rivals(n2);
    for (int i = 0; i < n2; i++) {
        string a, b;
        cin >> a >> b;
        rivals[i] = {
            id[a],
            id[b]
        };
    }

    int limit;
    cin >> limit;

    int total = 1 << n;
    vector < int > sum(total, 0);

    int best = 0;
    for (int mask = 1; mask < total; mask++) {
        int low = __builtin_ctz(mask);
        sum[mask] = sum[mask & (mask - 1)] + skill[low];
        if (sum[mask] > limit) continue;

        int cnt = __builtin_popcount(mask);
        if (cnt <= best) continue;

        bool ok = true;
        for (auto & f: friends) {
            bool a = (mask >> f.first) & 1;
            bool b = (mask >> f.second) & 1;
            if (a != b) {
                ok = false;
                break;
            }
        }
        if (!ok) continue;

        for (auto & r: rivals) {
            bool a = (mask >> r.first) & 1;
            bool b = (mask >> r.second) & 1;
            if (a && b) {
                ok = false;
                break;
            }
        }
        if (!ok) continue;

        best = cnt;
    }

    cout << best << endl;
    return 0;
}