#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // a[i] = 1 if field i is owned by Farmer Nhoj, 0 if free
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int answer = 0;

    // Check each farm (block of k consecutive fields)
    for (int start = 1; start <= n; start += k) {
        bool hasFreeField = false;
        for (int i = start; i < start + k; i++) {
            if (a[i] == 0) {
                hasFreeField = true;
                break;
            }
        }
        // If no free field in this farm, we're forced to build on Nhoj's land
        if (!hasFreeField) {
            answer++;
        }
    }

    cout << answer << endl;
    return 0;
}