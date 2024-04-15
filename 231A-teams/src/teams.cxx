#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int n, petya, vasya, tonya;
  int total = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> petya >> vasya >> tonya;

    if (petya + vasya + tonya >= 2) {
      total++;
    }
  }

  cout << total << "\n";

  return 0;
}
