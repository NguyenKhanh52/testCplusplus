#include <iostream>
using namespace std;

bool is_prime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int digitsum(int n) {
  int s = 0;
  while (n > 0) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

bool checkN(int n) {
  if (is_prime(n))
    return false;
  int sum = digitsum(n);
  int factorsum = 0;
  int temp = n;

  for (int i = 2; i * i <= temp; i++) {
    while (temp % i == 0) {
      factorsum += digitsum(i);
      temp /= i;
    }
  }
  if (temp > 1) {
    factorsum += digitsum(temp);
  }
  return factorsum == sum;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (checkN(n)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  system("pause");
  return 0;
}
