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

  void chuanhoaten() {
    stringstream ss(hoten);
    string tu, Ketqua = "";

    while (ss >> tu) {
      tu[0] = toupper(tu[0]);
      for (int i = 1; i < tu.size(); i++) {
        tu[i] = tolower(tu[i]);
      }
      Ketqua += tu + " ";
    }
    hoten = Ketqua.substr(0, Ketqua.size() - 1);
  }

  void nhap() {
    msv = "B20DCCN001";
    getline(cin, hoten);
    getline(cin, lop);
    getline(cin, dob);
    cin >> gpa;
  }

  void in() {
    cout << msv << " " << hoten << " " << lop << " " << dob << " " << fixed
         << setprecision(2) << gpa << endl;
  }
};

int main() {
  svien a;
  a.nhap();
  a.chuanhoahoten();
<<<<<<< HEAD
  a.chuanhoadob();
=======
  a.chuanhoandob();
>>>>>>> 789fcb5fda95f18f2148af51487a280d8d3128c8
  a.in();

  system("pause");
  return 0;
}