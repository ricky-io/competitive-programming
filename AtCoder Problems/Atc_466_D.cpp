#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> row(N + 1, -1);
    vector<int> col(N + 1, -1);

    vector<int> rook_row(M + 1);
    vector<int> rook_col(M + 1);

    vector<bool> alive(M + 1, false);

    int ans = 0;

    for (int id = 1; id <= M; id++) {
        int R, C;
        cin >> R >> C;

        if (row[R] != -1) {
            int old = row[R];
            if (alive[old]) {
                alive[old] = false;
                ans--;
                row[rook_row[old]] = -1;
                col[rook_col[old]] = -1;
            }
        }

        if (col[C] != -1) {
            int old = col[C];
            if (alive[old]) {
                alive[old] = false;
                ans--;
                row[rook_row[old]] = -1;
                col[rook_col[old]] = -1;
            }
        }

        alive[id] = true;
        rook_row[id] = R;
        rook_col[id] = C;
        row[R] = id;
        col[C] = id;
        ans++;

    }

    cout << ans << endl;
}