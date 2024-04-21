#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, sum = 0;
  vector<int> prices;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int price;
    cin >> price;
    prices.push_back(price);
  }

  sort(prices.begin(), prices.end());

  for (int i = 0; i < m; ++i) {
    if (prices[i] >= 0) {
      break;
    }
    sum += prices[i];
  }
  cout << -sum << endl;

  return 0;
}
