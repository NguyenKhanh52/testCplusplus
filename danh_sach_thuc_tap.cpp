#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
  int stt;
  string ma, hoTen, lop, email, doanhNghiep;
};

// Hàm so sánh dùng để sort - viết riêng thành hàm cho dễ hiểu,
// thay vì dùng lambda "viết tắt" như bản trước
bool soSanhTheoHoTen(SinhVien a, SinhVien b) { return a.hoTen < b.hoTen; }

int main() {
  int n;
  cin >> n;
  cin.ignore(); // nuốt ký tự xuống dòng còn sót sau khi đọc n

  vector<SinhVien> ds(n);
  for (int i = 0; i < n; i++) {
    ds[i].stt = i + 1;
    getline(cin, ds[i].ma);
    getline(cin, ds[i].hoTen);
    getline(cin, ds[i].lop);
    getline(cin, ds[i].email);
    getline(cin, ds[i].doanhNghiep);
  }

  int Q;
  cin >> Q;
  cin.ignore();

  for (int q = 0; q < Q; q++) {
    string ten;
    getline(cin, ten);

    // Bước 2.2: quét toàn bộ n sinh viên, lọc ra ai thuộc công ty "ten"
    vector<SinhVien> ketQua;
    for (int i = 0; i < n; i++) {
      if (ds[i].doanhNghiep == ten) {
        ketQua.push_back(ds[i]);
      }
    }

    // Bước 2.3: sắp xếp theo họ tên
    sort(ketQua.begin(), ketQua.end(), soSanhTheoHoTen);

    // Bước 2.4: in kết quả
    for (int i = 0; i < (int)ketQua.size(); i++) {
      SinhVien &sv = ketQua[i];
      cout << sv.stt << ' ' << sv.ma << ' ' << sv.hoTen << ' ' << sv.lop << ' '
           << sv.email << ' ' << sv.doanhNghiep << "\n";
    }
  }
  return 0;
}