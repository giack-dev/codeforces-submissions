#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  vector<string> words;

  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;
    words.push_back(word);
  }

  /* for (int i = 0; i < n; i++) { */
  /*   string abbreviation = words[i].substr(0, 1) + */
  /*                         to_string(words[i].length() - 2) + */
  /*                         words[i].substr(words[i].length() - 1); */
  /*   if (words[i].length() > 10) */
  /*     cout << abbreviation << "\n"; */
  /*   else */
  /*     cout << words[i] << "\n"; */
  /* } */

  for (string word : words) {
    string abbreviation = word.substr(0, 1) + to_string(word.length() - 2) +
                          word.substr(word.length() - 1);
    if (word.length() > 10)
      cout << abbreviation << "\n";
    else
      cout << word << "\n";
  }

  return 0;
}
