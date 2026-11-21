#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;

long long N;
vector<long long> divs;
long long ans = 0;
long long fact[70];

void precompute_facts() {
    fact[0] = 1;
    for (int i = 1; i < 70; i++)
        fact[i] = fact[i-1] * i % MOD;
}

// DFS over subsets of divs (all >1), picking in increasing order
// For each valid subset (product=N), we can optionally append element 1
// subset of size k, sum s:
//   - without 1: contributes s * k!
//   - with 1:    contributes (s+1) * (k+1)!
void dfs(int idx, long long remaining, long long cur_sum, int cnt) {
    if (remaining == 1) {
        long long s = cur_sum % MOD;
        // without 1
        ans = (ans + s * fact[cnt]) % MOD;
        // with 1 (add element 1 to sequence)
        ans = (ans + (s + 1) % MOD * fact[cnt + 1]) % MOD;
        return;
    }
    for (int i = idx; i < (int)divs.size(); i++) {
        long long d = divs[i];
        if (d > remaining) break;
        if (remaining % d == 0) {
            dfs(i + 1, remaining / d, cur_sum + d, cnt + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute_facts();
    cin >> N;

    if (N == 1) {
        // Only good sequence is (1), score = 1
        cout << 1 << endl;
        return 0;
    }

    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            divs.push_back(i);
            if (i != N / i) divs.push_back(N / i);
        }
    }
    divs.push_back(N);
    sort(divs.begin(), divs.end());

    dfs(0, N, 0, 0);

    cout << ans << endl;
    return 0;
}