#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    long l, r, a;
    cin >> l >> r >> a;

    long minN, x, maxN;

    minN = (r / a) + (r % a);
    x = (r / a) * a - 1;
    maxN = (x / a) + (x % a);

    if (x >= l) {
      minN = max(minN, maxN);
    }

    cout << minN << "\n";
  }

  return 0;
}
