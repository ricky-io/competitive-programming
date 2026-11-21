#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N >> S;

    // S[0] must be 'o' because {1} is always a contiguous block.
    // S[N-1] must be 'o' because {1,...,N} is the whole permutation.
    if (S[0] == 'x' || S[N - 1] == 'x') {
        cout << 0 << '\n';
        return 0;
    }

    // fact[i] = i! mod MOD
    vector<ll> fact(N + 2, 1);

    for (int i = 1; i <= N + 1; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    /*
        dp[i]:

        Sum of f(T) * (-1)^|T| over all T such that:

        O ∩ {1,...,i} ⊆ T ⊆ {1,...,i}
        and i ∈ T

        where O = { k | S[k] = 'o' }.

        dp[1] = -1
    */

    vector<ll> dp(N + 1, 0);

    dp[1] = MOD - 1;   // -1 mod MOD

    // lastO = largest position < i for which S[lastO] == 'o'
    int lastO = 1;

    for (int i = 2; i <= N; i++) {

        // If S[i-1] is 'o', it becomes a mandatory element of T.
        // Therefore the second-largest element j of T
        // cannot be smaller than this position.
        if (S[i - 2] == 'o') {
            lastO = i - 1;
        }

        ll cur = 0;

        /*
            j = second-largest element of T.

            If j is fixed, then:

            - the part 1...j is treated as one block
            - elements j+1 ... i are free

            Number of ways:
                (i - j + 1)!

            Sign changes because i is added to T:

                (-1)^|T| = -(-1)^|T without i|

            Therefore:

                dp[i] += -dp[j] * (i-j+1)!
        */

        for (int j = lastO; j < i; j++) {
            ll add = dp[j] * fact[i - j + 1] % MOD;

            cur -= add;

            if (cur < 0)
                cur += MOD;
        }

        dp[i] = cur;
    }

    /*
        dp[N] contains an extra sign (-1)^|T|.

        We need:
            (-1)^|O|

        to convert the inclusion-exclusion expression
        into the required answer.
    */

    ll ans = dp[N];

    int cntO = count(S.begin(), S.end(), 'o');

    if (cntO % 2 == 1) {
        ans = (MOD - ans) % MOD;
    }

    cout << ans << '\n';

    return 0;
}