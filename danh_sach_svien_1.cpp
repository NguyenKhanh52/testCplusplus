#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
  string maSV;
  string hoTen;
  string lop;
  string ngaySinh;
  float diemGPA;
};

// chuan hoa ho ten
string chuanHoaHoTen(string hoTen) {
  for (auto &c : hoTen) // for ( auto &c : hoTen ) = for ( char &c : hoTen )
    c = tolower((unsigned char)c);
  bool dauTu = true;
  for (auto &c : hoTen) {
    if (isspace((unsigned char)c)) {
      dauTu = true;
    } else {
      if (dauTu) // if(dauTu) = if (dauTu == true)
        c = toupper((unsigned char)c);
      dauTu = false;
    }
  }
  return hoTen;
}

string chuanHoaNgaySinh(string ngaySinhRaw) {
  replace(ngaySinhRaw.begin(), ngaySinhRaw.end(), '/', ' ');

  stringstream ss(ngaySinhRaw);
  int ngay, thang, nam;
  ss >> ngay >> thang >> nam;

  stringstream ketQua;
  ketQua << setw(2) << setfill('0') << ngay << "/" << setw(2) << setfill('0')
         << thang << "/" << nam;

  return ketQua.str();
}

string taoMaSV(int stt) {
  stringstream ss;
  ss << "B20DCCN" << setw(3) << setfill('0') << stt;
  return ss.str();
}

int main() {
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(),
             '\n'); // bo \n con sot sau cin>>n

  vector<SinhVien> ds(n);

  for (int i = 0; i < n; i++) {
    string hoTenRaw, ngaySinhRaw;

    ds[i].maSV = taoMaSV(i + 1);
    getline(cin, hoTenRaw);
    getline(cin, ds[i].lop);
    getline(cin, ngaySinhRaw);
    cin >> ds[i].diemGPA;
    cin.ignore(numeric_limits<streamsize>::max(),
               '\n'); // bo \n con sot sau cin >> gpa

    ds[i].hoTen = chuanHoaHoTen(hoTenRaw);
    ds[i].ngaySinh = chuanHoaNgaySinh(ngaySinhRaw);
  }

  for (int i = 0; i < n; i++) {
    cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].lop << " "
         << ds[i].ngaySinh << " " << fixed << setprecision(2) << ds[i].diemGPA
         << "\n";
  }

  system("pause");
  return 0;
}