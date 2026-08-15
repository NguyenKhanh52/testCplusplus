#include <iostream>

using namespace std;

bool check(int x) {
  // Tra ve true neu so chu so chan = so chu so le
  int chan = 0;
  int le = 0;
  while (x > 0) {
    int lastdigit = x % 10;
    if (lastdigit % 2 == 0) {
      chan++;
    } else {
      le++;
    }
    x /= 10;
  }
  if (chan == le)
    return true;
  return false;
}

int main() {
  int n;
  cin >> n;
  int start = 1;
  for (int i = 1; i < n; i++) {
    start *= 10;
  }
  int end = start * 10 - 1;
  // Tinh diem bat dau (start) va ket thuc (end) cho so co n chu so

  int count = 0; // Bien dem so luong so da in tren 1 dong
  for (int i = start; i < end; i++) {
    if (check(i)) {
      cout << i << " ";
      count++;
      if (count == 10) {
        cout << endl;
        count = 0;
      }
    }
  }
  system("pause");
  return 0;
}
