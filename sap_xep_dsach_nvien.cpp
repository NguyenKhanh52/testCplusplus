#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
  string maNV;
  string hoTen;
  string gioiTinh;
  string ngaySinh;
  string diaChi;
  string maSoThue; // dùng string để không mất số 0 ở đầu (nếu có)
  string ngayKyHopDong;

  int ngay, thang, nam;
};

string taoMaNV(int stt) {
  stringstream ss;
  ss << setw(5) << setfill('0') << stt;
  return ss.str();
}

// Tách ngày/tháng/năm từ chuỗi "dd/mm/yyyy" để so sánh
void tachNgay(const string &s, int &ngay, int &thang, int &nam) {
  string tmp = s;
  replace(tmp.begin(), tmp.end(), '/', ' ');
  stringstream ss(tmp);
  ss >> ngay >> thang >> nam;
}

int main() {
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<NhanVien> ds(n);

  for (int i = 0; i < n; i++) {
    ds[i].maNV =
        taoMaNV(i + 1); // gán mã theo THỨ TỰ NHẬP VÀO, trước khi sắp xếp

    getline(cin, ds[i].hoTen);
    getline(cin, ds[i].gioiTinh);
    getline(cin, ds[i].ngaySinh);
    getline(cin, ds[i].diaChi);
    getline(cin, ds[i].maSoThue);
    getline(cin, ds[i].ngayKyHopDong);

    tachNgay(ds[i].ngaySinh, ds[i].ngay, ds[i].thang, ds[i].nam);
  }

  // sap xep theo tuoi lon nhat -> nho nhat
  stable_sort(ds.begin(), ds.end(), [](const NhanVien &a, const NhanVien &b) {
    if (a.nam != b.nam)
      return a.nam < b.nam;
    if (a.thang != b.thang)
      return a.thang < b.thang;
    return a.ngay < b.ngay;
  });

  for (int i = 0; i < n; i++) {
    cout << ds[i].maNV << " " << ds[i].hoTen << " " << ds[i].gioiTinh << " "
         << ds[i].ngaySinh << " " << ds[i].diaChi << " " << ds[i].maSoThue
         << " " << ds[i].ngayKyHopDong << "\n";
  }

  system("pause");
  return 0;
}