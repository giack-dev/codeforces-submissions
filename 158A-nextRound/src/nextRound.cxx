#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int n, k;
  int passed(0);
  cin >> n >> k;

  vector<int> scores(n);

  for (int i = 0; i < n; i++) {
    cin >> scores[i];

    if (scores[i] > 0 && scores[i] >= scores[k - 1]) {
      passed++;
    }
  }

  cout << passed << "\n";

  return 0;
}
