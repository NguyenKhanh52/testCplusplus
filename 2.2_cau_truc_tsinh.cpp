#include <iomanip>
#include <iostream>

using namespace std;
struct ThiSinh {
  string hoten;
  string ngaysinh;
  float diem1, diem2, diem3;
};
using ts = ThiSinh;
int main() {
  ts a;
  getline(cin, a.hoten);
  cin >> a.ngaysinh >> a.diem1 >> a.diem2 >> a.diem3;
  float tong = a.diem1 + a.diem2 + a.diem3;
  cout << a.hoten << " " << a.ngaysinh << " " << fixed << setprecision(1)
       << tong << endl;
  system("pause");
  return 0;
}