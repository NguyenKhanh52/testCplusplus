#include <iostream>
#include <vector>

using namespace std;
int main() {
  const int MAXN = 1005;
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<bool> confirmed(MAXN, false);
  for (int i = 0; i < n; i++) {
    confirmed[a[i]] = true;
  }

  bool printed = false;
  for (int i = 1; i < MAXN; i++) {
    if (confirmed[i]) {
      if (printed)
        cout << " ";
      cout << i;
      printed = true;
    }
  }
  cout << endl;
  system("pause");
  return 0;
}