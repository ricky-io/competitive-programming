#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<long long> H(N), L(N);

    for (int i = 0; i < N; i++) {
        cin >> H[i] >> L[i];
    }

    // suffix maximum heights
    vector<long long> suff(N);
    suff[N - 1] = H[N - 1];

    for (int i = N - 2; i >= 0; i--) {
        suff[i] = max(H[i], suff[i + 1]);
    }
    
    // quesry searching

    int Q;
    cin >> Q;

    while (Q--) {
        long long T;
        cin >> T;

        int idx = upper_bound(L.begin(), L.end(), T) - L.begin();

        cout << suff[idx] << '\n';
    }

    return 0;
}