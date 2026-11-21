#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int countSwaps(string s, int lastDigitIdx, int secondLastDigitIdx) {
    int n = s.size();
    int swaps = 0;

    for (int i = lastDigitIdx; i < n - 1; i++) {
        swap(s[i], s[i + 1]);
        swaps++;
    }

    if (secondLastDigitIdx > lastDigitIdx)
        secondLastDigitIdx--;

    for (int i = secondLastDigitIdx; i < n - 2; i++) {
        swap(s[i], s[i + 1]);
        swaps++;
    }

    int firstNonZero = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            firstNonZero = i;
            break;
        }
    }

    if (firstNonZero == -1)
        return INF;  

    for (int i = firstNonZero; i > 0; i--) {
        swap(s[i], s[i - 1]);
        swaps++;
    }

    long long num = stoll(s);

    if (num % 25 == 0)
        return swaps;

    return INF;
}

int main() {
    long long n;
    cin >> n;

    string s = to_string(n);
    int len = s.size();

    int ans = INF;

    for (int last = 0; last < len; last++) {
        for (int secondLast = 0; secondLast < len; secondLast++) {

            if (last == secondLast)
                continue;

            ans = min(ans, countSwaps(s, last, secondLast));
        }
    }

    if (ans == INF)
        cout << -1;
    else
        cout << ans;
}