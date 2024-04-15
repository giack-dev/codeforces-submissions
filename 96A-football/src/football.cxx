#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;

  if (s.find("0000000") < 100 || s.find("1111111") < 100) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
