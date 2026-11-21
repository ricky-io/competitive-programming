#include <bits/stdc++.h>
using namespace std;

int N, K;
int A[15];
vector<vector<char>> reach_table;
vector<vector<int>> prevValidS; 
string out;

void dfs(int pos, int remaining) {
    if (pos == N + 1) {
        if (remaining == 0) {
            for (int i = 1; i <= N; i++) {
                out += to_string(A[i]);
                out += (i == N ? '\n' : ' ');
            }
        }
        return;
    }
    int s = prevValidS[pos][remaining];
    while (s != -1) {
        A[pos] = (remaining - s) / pos;
        dfs(pos + 1, s);
        s = (s - pos >= 0) ? prevValidS[pos][s - pos] : -1;
    }
}

int main() {
    cin >> N >> K;

    // Build reachability table: O(N*K)
    reach_table.assign(N + 2, vector<char>(K + 1, 0));
    reach_table[N + 1][0] = 1;
    for (int i = N; i >= 1; i--) {
        for (int s = 0; s <= K; s++) reach_table[i][s] = reach_table[i + 1][s];
        for (int s = i; s <= K; s++) {
            if (reach_table[i][s - i]) reach_table[i][s] = 1;
        }
    }

    // Build jump tables: O(N*K)
    prevValidS.assign(N + 1, vector<int>(K + 1, -1));
    for (int pos = 1; pos <= N; pos++) {
        int row = pos + 1;
        for (int s = 0; s <= K; s++) {
            if (reach_table[row][s]) {
                prevValidS[pos][s] = s;
            } else if (s - pos >= 0) {
                prevValidS[pos][s] = prevValidS[pos][s - pos];
            } else {
                prevValidS[pos][s] = -1;
            }
        }
    }

    out.reserve(1 << 22);
    dfs(1, K);
    cout << out;
    return 0;
}