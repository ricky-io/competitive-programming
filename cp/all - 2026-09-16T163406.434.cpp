#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	ll u, v;
  cin >> u >> v;

  if (u > v || (v - u) % 2 != 0) {
    cout << -1 << "\n";
    return 0;
  }

  if (u == 0 && v == 0) {
    cout << 0 << "\n";
    return 0;
  }

  if (u == v) {
    cout << 1 << "\n";
    cout << u << "\n";
    return 0;
  }

  ll x = (v - u) / 2;

  if ((u & x) == 0) {
    cout << 2 << "\n";
    cout << (u + x) << " " << x << "\n";
    return 0;
  }

  cout << 3 << "\n";
  cout << u << " " << x << " " << x << "\n";

}
