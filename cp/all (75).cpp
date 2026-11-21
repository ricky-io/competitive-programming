#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string S;
    cin >> S;

    // Collect positions (1-indexed) of all 'x' characters
    vector<int> xpos;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'x') xpos.push_back(i + 1);
    }
    int m = xpos.size();

    // Answer for k: position of the k-th 'x' overall, or N if fewer than k x's exist
    for (int k = 1; k <= N; k++) {
        int ans = (k <= m) ? xpos[k - 1] : N;
        cout << ans << "\n";
    }

    return 0;
}