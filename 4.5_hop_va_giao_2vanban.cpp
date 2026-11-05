#include <cctype>
#include <fstream>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  string tep[2] = {"DATA1.in", "DATA2.in"};
  set<string> tap[2];

  // tap 0 la file 1 , tap 1 la file 2
  //  duyet qua 2 file de luu vao 2 tap
  for (int j = 0; j < 2; j++) {
    ifstream in(tep[j]);
    string s;
    while (in >> s) {
      for (int i = 0; i < (int)s.size(); i++) {
        s[i] = tolower(s[i]);
      }
      tap[j].insert(s);
    }
    in.close();
  }
  set<string> hop, giao;
  for (auto tu : tap[0]) {
    hop.insert(tu);
    if (tap[1].count(tu) > 0)
      giao.insert(tu); // set no tu kiem tra lap tu
  }
  for (auto tu : tap[1]) {
    hop.insert(tu);
  }

  bool dau = true;
  for (auto tu : hop) {
    if (!dau)
      cout << " "; // !dau tuc la false;
    cout << tu;
    dau = false;
  }

  cout << endl;

  dau = true;
  for (auto tu : giao) {
    if (!dau)
      cout << " ";
    cout << tu;
    dau = false;
  }
  cout << endl;

  system("pause");
  return 0;
}