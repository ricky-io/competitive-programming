#include <bits/stdc++.h>

using namespace std;

long long sum_digits(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long x;
        cin >> x;
        int count = 0;
        for (int s = 1; s <= 90; s++) {
            long long y = x + s;
            if (sum_digits(y) == s) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}