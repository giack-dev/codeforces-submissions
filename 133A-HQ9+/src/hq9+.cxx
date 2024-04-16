#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string p;
  cin >> p;

  for (auto i : p) {
    if (i == 'H' || i == 'Q' || i == '9') {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";

  return 0;
}
