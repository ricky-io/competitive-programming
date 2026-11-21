#include <bits/stdc++.h>
using namespace std;

const int MAXN = 505;
const int MAXV = 100000;
const int MAXK = 10;

int peopleCnt[MAXV + 1];
int cardCnt[MAXV + 1];

int dp[MAXN][MAXN * MAXK + 1];

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> h(k + 1);
    h[0] = 0;

    // Count cards
    for (int i = 0; i < n * k; i++) {
        int x;
        cin >> x;
        cardCnt[x]++;
    }

    // Count people
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        peopleCnt[x]++;
    }

    // Happiness
    for (int i = 1; i <= k; i++)
        cin >> h[i];

    // Universal DP
    for (int person = 0; person < n; person++) {

        for (int used = 0; used <= n * k; used++) {

            for (int take = 0; take <= k; take++) {

                dp[person + 1][used + take] =
                    max(dp[person + 1][used + take],
                        dp[person][used] + h[take]);
            }
        }
    }

    int ans = 0;

    for (int value = 1; value <= MAXV; value++) {

        ans += dp[peopleCnt[value]][cardCnt[value]];
    }

    cout << ans;
}