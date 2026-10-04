#include <bits/stdc++.h>
using namespace std;

class svien {
private:
  string msv;
  string hoten;
  string lop;
  string dob;
  float gpa;

public:
  svien() {
    msv = "";
    hoten = "";
    lop = "";
    dob = "";
    gpa = 0;
  }

  void chuanhoadob() {
    string ngay = "", thang = "", nam = "";
    int count = 0;
    for (char c : dob) {
      if (c == '/')
        count++;
      else if (count == 0)
        ngay += c;
      else if (count == 1)
        thang += c;
      else
        nam += c;
    }

    if (ngay.size() == 1)
      ngay = '0' + ngay;
    if (thang.size() == 1)
      thang = '0' + thang;
    dob = ngay + '/' + thang + '/' + nam;
  }

  void chuanhoahoten() {
    stringstream ss(hoten);
    string tu, ketqua = "";
    while (ss >> tu) {
      tu[0] = toupper(tu[0]);
      for (int i = 1; i < tu.size(); i++) {
        tu[i] = tolower(tu[i]);
      }
      ketqua += tu + " ";
    }
    hoten = ketqua.substr(0, ketqua.size() - 1);
  }

  friend istream &operator>>(istream &in, svien &sv) {
    sv.msv = "B20DCCN001";
    getline(in, sv.hoten);
    getline(in, sv.lop);
    getline(in, sv.dob);
    in >> sv.gpa;
    return in;
  }
  friend ostream &operator<<(ostream &out, const svien &sv) {
    out << sv.msv << " " << sv.hoten << " " << sv.lop << " " << sv.dob << " "
        << fixed << setprecision(2) << sv.gpa;
    return out;
  }
};
int main() {
  svien a;
  cin >> a;
  a.chuanhoahoten();
  a.chuanhoadob();
  cout << a;

  system("pause");
  return 0;
}
