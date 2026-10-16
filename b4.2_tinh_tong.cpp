#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream in("DATA2.in");

  long long sum = 0;
  string s;

  while (in >> s) {
    stringstream ss(s);
    char letter;
    long long a;
    // kiem tra s co phai so integer ko
    // ss > a : lay mot so
    // !(ss >> letter) : thu xem co lay dc 1 chu cai hay ko; neu kco thi true
    if (ss >> a && !(ss >> letter)) {
      if (INT_MIN <= a && a <= INT_MAX) {
        sum += a;
      }
    }
  }
  cout << sum << endl;

  in.close();
  system("pause");
  return 0;
}