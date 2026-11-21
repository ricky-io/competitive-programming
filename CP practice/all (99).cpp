#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

typedef long long ll;

void print128(__int128 x) {
    if (x == 0) {
        putchar('0');
        return;
    }
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    char buf[40];
    int p = 0;
    while (x) {
        buf[p++] = '0' + (x % 10);
        x /= 10;
    }
    while (p) putchar(buf[--p]);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        vector<ll> A(N+1);
        for (int i = 1; i <= N; ++i) scanf("%lld", &A[i]);

        // first term: sum over all subarrays of total_sum
        __int128 first = 0;
        for (int i = 1; i <= N; ++i) {
            first += (__int128)A[i] * i * (N - i + 1);
        }

        // prefix sums of |negative values|
        vector<ll> pneg(N+1, 0);
        for (int i = 1; i <= N; ++i) {
            pneg[i] = pneg[i-1] + (A[i] < 0 ? -A[i] : 0);
        }

        // Q[L] = pneg[L-1] for L = 1..N
        vector<ll> Q(N+1);
        for (int L = 1; L <= N; ++L) Q[L] = pneg[L-1];

        // prefix sums of Q
        vector<ll> preQ(N+1, 0);
        for (int i = 1; i <= N; ++i) preQ[i] = preQ[i-1] + Q[i];

        // collect positive positions and their C_i
        vector<int> pos;
        vector<ll> C;
        for (int i = 1; i <= N; ++i) {
            if (A[i] > 0) {
                pos.push_back(i);
                C.push_back(pneg[i-1] - A[i]);
            }
        }
        int m = pos.size();
        __int128 totalM = 0;

        if (m > 0) {
            // previous greater-or-equal (to left)
            vector<int> prev(m, -1);
            stack<int> st;
            for (int i = 0; i < m; ++i) {
                while (!st.empty() && C[st.top()] < C[i]) st.pop();
                if (!st.empty()) prev[i] = st.top();
                st.push(i);
            }

            // next strictly greater (to right)
            vector<int> nxt(m, m);
            stack<int> st2;
            for (int i = 0; i < m; ++i) {
                while (!st2.empty() && C[st2.top()] < C[i]) {
                    nxt[st2.top()] = i;
                    st2.pop();
                }
                st2.push(i);
            }

            // process each positive position
            for (int i = 0; i < m; ++i) {
                int p = pos[i];
                ll curC = C[i];
                int Lleft = (prev[i] == -1) ? 1 : pos[prev[i]] + 1;
                int Rright = (nxt[i] == m) ? N+1 : pos[nxt[i]];
                ll lenR = Rright - p;   // number of R choices

                // find largest L in [Lleft, p] with Q[L] < curC
                int a = Lleft, b = p;
                int Lmax = a - 1;
                int lo = a, hi = b;
                while (lo <= hi) {
                    int mid = (lo + hi) / 2;
                    if (Q[mid] < curC) {
                        Lmax = mid;
                        lo = mid + 1;
                    } else {
                        hi = mid - 1;
                    }
                }
                if (Lmax >= a) {
                    __int128 sumC = (__int128)curC * (Lmax - a + 1);
                    __int128 sumQ = (__int128)(preQ[Lmax] - preQ[a-1]);
                    __int128 S = sumC - sumQ;
                    totalM += (__int128)lenR * S;
                }
            }
        }

        __int128 ans = first + 2 * totalM;
        print128(ans);
        putchar('\n');
    }
    return 0;
}