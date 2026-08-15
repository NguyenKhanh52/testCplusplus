#include <iomanip>
#include <iostream>

using namespace std;

void solve() {
  string key101 = "ABBADCCABDCCABD";
  string key102 = "ACCABCDDBBCDDBB";

  int testCode;
  cin >> testCode;

  string key;
  switch (testCode) {
  case 101:
    key = key101;
    break;
  case 102:
    key = key102;
    break;
  }

  int right = 0;
  for (int i = 0; i < 15; i++) {
    char ans;
    cin >> ans;
    if (ans == key[i])
      right++;
  }

  double sum = (right / 15.0) * 10;
  cout << fixed << setprecision(2) << sum << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  system("pause");
  return 0;
}
