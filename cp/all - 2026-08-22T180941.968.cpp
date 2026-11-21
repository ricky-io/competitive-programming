#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long long k;
    cin >> n >> m >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<bool> eaten(n, false);

    long long sum = 0;

    for (int i = 0; i < n; i++) {

        if (i >= m && eaten[i - m]) {
            sum -= a[i - m];
        }

        if (sum + a[i] <= k) {
            eaten[i] = true;
            sum += a[i];
            cout << "Yes" << endl; 
        } else {
            cout << "No" << endl;
        }
    }
}