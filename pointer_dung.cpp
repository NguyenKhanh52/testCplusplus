#include <iostream>

struct con_nguoi {
  con_nguoi(int t, float v1, float cc) {
    tuoi = t;
    vong1 = v1;
    chieu_cao = cc;
  }
  int tuoi;
  float vong1;
  float chieu_cao;
};

int main() {
  // ============================
  // CACH DUNG: Dung mang (array)
  // ============================
  // Mang dam bao cac phan tu nam LIEN NHAU trong bo nho
  // nen pointer arithmetic luon an toan

  con_nguoi ds[3] = {
    con_nguoi(22, 95, 1.65),   // ds[0] = Thao
    con_nguoi(18, 90, 1.70),   // ds[1] = Lan
    con_nguoi(29, 85, 1.60)    // ds[2] = Huong
  };

  // Con tro tro den phan tu dau tien cua mang
  con_nguoi *ptr = ds;  // tuong duong: ptr = &ds[0]

  // --- Truy cap bang pointer arithmetic ---

  // ptr + 0 = phan tu thu 0 (Thao)
  std::cout << "=== Thao (ptr + 0) ===" << std::endl;
  std::cout << "Tuoi:      " << (ptr)->tuoi << std::endl;
  std::cout << "Vong 1:    " << (ptr)->vong1 << std::endl;
  std::cout << "Chieu cao: " << (ptr)->chieu_cao << std::endl;

  // ptr + 1 = phan tu thu 1 (Lan)
  std::cout << "\n=== Lan (ptr + 1) ===" << std::endl;
  std::cout << "Tuoi:      " << (ptr + 1)->tuoi << std::endl;
  std::cout << "Vong 1:    " << (ptr + 1)->vong1 << std::endl;
  std::cout << "Chieu cao: " << (ptr + 1)->chieu_cao << std::endl;

  // ptr + 2 = phan tu thu 2 (Huong)
  std::cout << "\n=== Huong (ptr + 2) ===" << std::endl;
  std::cout << "Tuoi:      " << (ptr + 2)->tuoi << std::endl;
  std::cout << "Vong 1:    " << (ptr + 2)->vong1 << std::endl;
  std::cout << "Chieu cao: " << (ptr + 2)->chieu_cao << std::endl;

  // --- Duyet mang bang vong lap + pointer ---
  std::cout << "\n=== Duyet bang vong lap ===" << std::endl;
  for (int i = 0; i < 3; i++) {
    std::cout << "Nguoi " << i << ": tuoi = " << (ptr + i)->tuoi
              << ", vong1 = " << (ptr + i)->vong1
              << ", cao = " << (ptr + i)->chieu_cao << std::endl;
  }

  // --- Cach khac: di chuyen con tro ---
  std::cout << "\n=== Di chuyen con tro (ptr++) ===" << std::endl;
  con_nguoi *p = ds;  // bat dau tu dau mang
  for (int i = 0; i < 3; i++) {
    std::cout << "Nguoi " << i << ": tuoi = " << p->tuoi << std::endl;
    p++;  // nhay den phan tu tiep theo (an toan vi la mang!)
  }

  system("pause");
  return 0;
}
