#include <bits/stdc++.h>
using namespace std;

struct nhanvien {
  string maNV;
  string hoten;
  string sex;
  string ngaysinh;
  string adress;
  string masothue;
  string ngaykyhd;
};

int main() {
  nhanvien a;
  a.maNV = "00001";
  getline(cin, a.hoten);
  getline(cin, a.sex);
  getline(cin, a.ngaysinh);
  getline(cin, a.adress);
  getline(cin, a.masothue);
  getline(cin, a.ngaykyhd);
  cout << a.maNV << " " << a.hoten << " " << a.sex << " " << a.ngaysinh << " "
       << a.adress << " " << a.masothue << " " << a.ngaykyhd << endl;

  system("pause");
  return 0;
}