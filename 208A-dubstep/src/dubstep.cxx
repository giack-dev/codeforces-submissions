#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;

  while (s.size() >= 3) {
    size_t index = s.find("WUB");
    if (index != string::npos) {
      s.erase(index, 3);
      if (index > 0 && s[index - 1] != ' ')
        s.insert(index, " ");
    } else {
      break;
    }
  }

  cout << s << "\n";

  return 0;
}
