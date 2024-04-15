#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string k = "qwertyuiopasdfghjkl;zxcvbnm,./";

  int pos;
  char shift;
  string s, fixed_s;
  cin >> shift >> s;

  for (int i = 0; i < s.size(); i++) {
    pos = k.find(s[i]);
    if (shift == 'R')
      fixed_s += k[pos - 1];
    else if (shift == 'L')
      fixed_s += k[pos + 1];
  }

  cout << fixed_s << "\n";
}
