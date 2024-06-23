#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    ll ab = 0, ba = 0;

    for (ll i = 0; i < (ll)s.size() - 1; ++i) {
      if (s[i] == 'a' && s[i + 1] == 'b')
        ab++;
      if (s[i] == 'b' && s[i + 1] == 'a')
        ba++;
    }

    if (ab != ba) {
      if (ab > ba) {
        if (s[0] == 'a') {
          s[s.size() - 1] = 'a';
        } else {
          s[s.size() - 1] = 'b';
        }
      } else {
        if (s[0] == 'b') {
          s[s.size() - 1] = 'b';
        } else {
          s[s.size() - 1] = 'a';
        }
      }
    }

    cout << s << "\n";
  }

  return 0;
}
