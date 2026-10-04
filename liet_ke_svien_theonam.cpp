#include <bits/stdc++.h>
using namespace std;
class svien {
private:
  string msv;
  string hoten;
  string lop;
  string mail;

public:
  void nhap() {
    getline(cin, msv);
    getline(cin, hoten);
    getline(cin, lop);
    getline(cin, mail);
  }

  void in() const {
    cout << msv << " " << hoten << " " << lop << " " << mail << endl;
  }

  int namKhoa() const {
    string nam = msv.substr(1, 2);
    return 2000 + stoi(nam);
  }
};
int main() {
  int n;
  cin >> n;
  cin.ignore();
  vector<svien> ds;
  for (int i = 0; i < n; i++) {
    svien a;
    a.nhap();
    ds.push_back(a);
  }

  int t;
  cin >> t;
  while (t--) {
    int nam;
    cin >> nam;
    cout << "DANH SACH SINH VIEN KHOA " << nam << ":" << endl;
    for (const svien &a : ds) {
      if (a.namKhoa() == nam)
        a.in();
    }
  }

  system("pause");
  return 0;
}