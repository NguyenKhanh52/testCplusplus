#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
  string maSV;
  string hoTen;
  string lop;
  string ngaySinh;
  float diemGPA;
};

// Chuẩn hóa Họ tên: viết hoa chữ cái đầu mỗi từ, còn lại viết thường
string chuanHoaHoTen(string hoTen) {
  for (auto &c : hoTen)
    c = tolower((unsigned char)c);
  bool dauTu = true;
  for (auto &c : hoTen) {
    if (isspace((unsigned char)c)) {
      dauTu = true;
    } else {
      if (dauTu)
        c = toupper((unsigned char)c);
      dauTu = false;
    }
  }
  return hoTen;
}

// Chuẩn hóa ngày sinh về đúng dạng dd/mm/yyyy
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

// Tự sinh Mã SV: B20DCCN + số thứ tự 3 chữ số
string taoMaSV(int stt) {
  stringstream ss;
  ss << "B20DCCN" << setw(3) << setfill('0') << stt;
  return ss.str();
}

int main() {
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(),
             '\n'); // bỏ newline còn sót sau khi đọc n

  vector<SinhVien> ds(n);

  for (int i = 0; i < n; i++) {
    string hoTenRaw, ngaySinhRaw;

    ds[i].maSV = taoMaSV(i + 1); // mã SV tự sinh theo thứ tự
    getline(cin, hoTenRaw);  // họ tên (có khoảng trắng, có thể sai hoa/thường)
    getline(cin, ds[i].lop); // lớp
    getline(cin, ngaySinhRaw); // ngày sinh (chưa chuẩn)
    cin >> ds[i].diemGPA;      // điểm GPA
    cin.ignore(numeric_limits<streamsize>::max(),
               '\n'); // bỏ newline trước lần getline kế tiếp

    ds[i].hoTen = chuanHoaHoTen(hoTenRaw);
    ds[i].ngaySinh = chuanHoaNgaySinh(ngaySinhRaw);
  }

  for (int i = 0; i < n; i++) {
    cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].lop << " "
         << ds[i].ngaySinh << " " << fixed << setprecision(2) << ds[i].diemGPA
         << "\n";
  }

  return 0;
}