#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N + 1);
    vector<int> B(N);

    for (int i = 1; i <= N; i++)
        cin >> A[i];

    for (int i = 1; i < N; i++)
        cin >> B[i];

    int ans = INT_MAX;
    
    for (int start = 0; start <= 1; start++) {

        vector<int> flip(N + 1);
        flip[1] = start;

        int ops = start;

        for (int i = 1; i < N; i++) {
            flip[i + 1] = B[i] ^ A[i] ^ A[i + 1] ^ flip[i];
            ops += flip[i + 1];
        }

        ans = min(ans, ops);
    }

    cout << ans << endl;
}