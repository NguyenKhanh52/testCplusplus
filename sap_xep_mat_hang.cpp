#include <bits/stdc++.h>
using namespace std;

struct MatHang {
  int maMatHang;
  string tenMatHang;
  string nhomHang;
  float giaMua;
  float giaBan;
};

int main() {
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<MatHang> ds(n);

  for (int i = 0; i < n; i++) {
    ds[i].maMatHang = i + 1;
    getline(cin, ds[i].tenMatHang);
    getline(cin, ds[i].nhomHang);
    cin >> ds[i].giaMua;
    cin >> ds[i].giaBan;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  // sap xep theo loi nhuan giam dan
  sort(ds.begin(), ds.end(), [](const MatHang &a, const MatHang &b) {
    return (a.giaBan - a.giaMua) > (b.giaBan - b.giaMua);
  });

  for (int i = 0; i < n; i++) {
    float loiNhuan = ds[i].giaBan - ds[i].giaMua;
    cout << ds[i].maMatHang << " " << ds[i].tenMatHang << " " << ds[i].nhomHang
         << " " << fixed << setprecision(2) << loiNhuan << "\n";
  }

  system("pause");
  return 0;
}
