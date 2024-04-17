#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll n, k;
  cin >> n >> k;

  ll result;

  if (k <= (n + 1) / 2) {
    result = k * 2 - 1;
  } else {
    result = (k - (n + 1) / 2) * 2;
  }

  cout << result << "\n";

  return 0;
}
