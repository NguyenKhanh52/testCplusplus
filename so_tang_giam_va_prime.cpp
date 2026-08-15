#include <iostream>

using namespace std;

bool eratosthenes(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
bool isInDec(int n) {
  bool increasing = true;
  bool decreasing = true;

  while (n >= 10) {
    int lastdigit = n % 10;
    int predigit = (n / 10) % 10;

    if (lastdigit <= predigit)
      increasing = false;
    if (lastdigit >= predigit)
      decreasing = false;

    n /= 10;
  }
  return increasing || decreasing;
}

void solve() {
  // TODO: Bài 1.8 - Đếm số lượng số nguyên tố tăng giảm
  int n;
  cin >> n;
  long long start = 1;
  for (int i = 1; i < n; i++)
    start *= 10;
  long long end = start * 10 - 1;
  int count = 0;
  for (int i = start; i <= end; i++) {
    if (eratosthenes(i) && isInDec(i)) {
      cout << i << " ";
      count++;
    }
  }
  cout << endl;
  cout << "Tong so la : " << count << endl;
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
