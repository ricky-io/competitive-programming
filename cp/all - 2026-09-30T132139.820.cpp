#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void permutations(string &s, int i) {
    if(i == s.size()) {
        ans.push_back(s);
        return;
    }

    set<char> used;

    for(int idx = i; idx < s.size(); idx++) {
        if(used.count(s[idx])) continue;

        used.insert(s[idx]);

        swap(s[i], s[idx]);
        permutations(s, i + 1);
        swap(s[i], s[idx]);
    }
}

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());   // IMPORTANT

    permutations(s, 0);

    cout << ans.size() << '\n';

    for(auto &x : ans) {
        cout << x << '\n';
    }
}