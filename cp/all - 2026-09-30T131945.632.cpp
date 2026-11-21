#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void permutations(string &s, size_t i) {
    if(i == s.size()) {
        ans.push_back(s);
        return;
    }

    set<char> c;

    for(size_t idx = i; idx < s.size(); idx++) {
        if(c.count(s[idx])) continue;

        c.insert(s[idx]);

        swap(s[idx], s[i]);
        permutations(s, i + 1);
        swap(s[idx], s[i]);
    }
}

int main() {
    string s;
    cin >> s;

    permutations(s, 0);

    cout << ans.size() << '\n';

    for(size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << '\n';
    }
}