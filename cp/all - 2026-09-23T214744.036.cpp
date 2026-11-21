#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        priority_queue<int, vector<int>, greater<int>> pq;

        long long sum = 0;
        bool deleted = false;
        bool possible = true;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            sum += x;
            pq.push(x);

            if (sum < 0) {
                if (deleted) {
                    possible = false;
                } else {
                    sum -= pq.top();
                    pq.pop();
                    deleted = true;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}