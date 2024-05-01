#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> n;

    if (n / 2020 >= n % 2020)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
