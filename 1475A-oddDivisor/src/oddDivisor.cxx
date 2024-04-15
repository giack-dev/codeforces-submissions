#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    long long x;
    cin >> x;

    bool has_odd_divisor = false;
    while (x > 1) {
      if (x % 2 == 1) {
        has_odd_divisor = true;
        break;
      }
      x /= 2;
    }

    if (has_odd_divisor) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
