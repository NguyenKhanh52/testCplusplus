#include <iostream>
#include <numeric> // std::gcd (C++17)

using namespace std;

void solve() {
  int n;
  cin >> n;
  long long result = 1;
  for (int i = 1; i <= n; i++) {
    result = (result / std::gcd(result, (long long)i)) * i;
  }
  cout << result << endl;
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
