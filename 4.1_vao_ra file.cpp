#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream in("PTIT.in");

  if (!in.is_open())
    cout << "mo file thanh cong" << endl;
  else
    cout << "mo file that bai" << endl;

  ofstream out("PTIT.out");

  string s;
  while (getline(in, s)) {
    out << s << endl;
  }

  in.close();
  out.close();

  system("pause");
  return 0;
}
