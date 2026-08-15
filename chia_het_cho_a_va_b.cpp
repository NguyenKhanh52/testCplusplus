#include <algorithm>
#include <iostream>

using namespace std;

// Đếm số trong [m, n] chia hết cho k
int countDiv(int m, int n, int k) {
    return n / k - (m - 1) / k;
}

void solve() {
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    if (m > n) swap(m, n);

    //BCNN(a, b) = a / GCD(a, b) * b
    int lcm = a / __gcd(a, b) * b;// __gcd la cach viet ham co san trong C++

    //Nguyen ly bu tru
    //(chia het A hoac B) = count(A) + count(B) - count(LCM)
    int result = countDiv(m, n, a)
               + countDiv(m, n, b)
               - countDiv(m, n, lcm);

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
