#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string username;
  cin >> username;

  set<char> unique_chars(username.begin(), username.end());
  string unique_username(unique_chars.begin(), unique_chars.end());

  if (unique_username.length() % 2 != 0)
    cout << "IGNORE HIM!\n";
  else
    cout << "CHAT WITH HER!\n";

  return 0;
}
