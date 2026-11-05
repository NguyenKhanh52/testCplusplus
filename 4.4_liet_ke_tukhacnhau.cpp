#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream in("VANBAN.in");
  set<string> ds;
  string s;

  while (in >> s) {
    for (int i = 0; i < (int)s.size(); i++) {
      s[i] = tolower(s[i]);
    }
    ds.insert(s);
  }
  for (auto x : ds) {
    cout << x << endl;
  }

  in.close();

  system("pause");
  return 0;
}