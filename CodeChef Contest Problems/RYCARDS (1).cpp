#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int R, Y;
        cin >> R >> Y;

        int remainingYellow = max(0, Y - R);

        int ans = R + remainingYellow / 2;

        cout << ans << endl;
    }

    return 0;
}