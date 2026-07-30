#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << (a | b) + (a & b);
  system("pause");
  return 0;
}
/*
   a = 113 = 01110001
   b = 93 = 01011101
   a & b = 01010001 = 81 (AND: có 2 số 1 ở cùng vị trí thì lấy)
   ------------------
   a = 113 = 01110001
   b = 93 = 01011101
   a | b = 01111101 = 125 (OR: có số 1 là lấy)
   (a & b) + (a | b) = 81 + 125 = 206
   */