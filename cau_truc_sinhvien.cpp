#include <bits/stdc++.h>
using namespace std;

struct ttsinhvien {
  string msv;
  string hoten;
  string lop;
  string ngaysinh;
  float gpa;
};

typedef ttsinhvien sv;

string chinhngaysinh(string ngaysinhRaw) {
  replace(ngaysinhRaw.begin(), ngaysinhRaw.end(), '/', ' ');
  stringstream ss(ngaysinhRaw);
  int ngay, thang, nam;
  ss >> ngay >> thang >> nam;

  stringstream ketQua;
  ketQua << setw(2) << setfill('0') << ngay
         << "/" // setw(2) set fill 0 tức là nếu số đó bé hơn 10 thì thêm số 0
                // vào trước //
         << setw(2) << setfill('0') << thang << "/" << nam;

  return ketQua.str();
}

int main() {
  sv a;
  a.msv = "B20DCCN01";
  string ngaysinhRaw;
  getline(cin, a.hoten);
  getline(cin, a.lop);
  getline(cin, ngaysinhRaw);
  cin >> a.gpa;

  a.ngaysinh = chinhngaysinh(ngaysinhRaw);
  cout << "B20DCCN01" << " " << a.hoten << " " << a.lop << " " << a.ngaysinh
       << " " << fixed << setprecision(2) << a.gpa << endl;
  system("pause");
  return 0;
}