#include <algorithm>
#include <iostream>

using namespace std;

// Dem so trong [m, n] chia het cho k
int countDiv(int m, int n, int k) {
    return n / k - (m - 1) / k;
}

void solve() {
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    if (m > n) swap(m, n);

    //BCNN(a, b) = a / GCD(a, b) * b
    int lcm = a / __gcd( a , b ) * b;

    int result = countDiv( m ,n , lcm);

    cout << result << "\n";
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
