#include <iostream>
#include <string>

struct con_nguoi {
  con_nguoi(std::string ht, int t, float v1, float cc) {
    ho_ten = ht;
    tuoi = t;
    vong1 = v1;
    chieu_cao = cc;
    zin = true;
  }
  int tuoi;
  float vong1;
  float chieu_cao;
  std::string ho_ten;
  bool zin;
};

void pha_zin (con_nguoi *nguoi) {
  std::cout << "Thuc hien pha zin em " << nguoi->ho_ten << std::endl;
  nguoi->zin = false ; 
}

int main() {
  con_nguoi hoi_chi_em[5] = {
      con_nguoi("Thao", 22, 95, 1.65), 
      con_nguoi("Lan", 18, 90, 1.70),
      con_nguoi("Huong", 29, 85, 1.62), 
      con_nguoi("Nhung", 16, 80, 1.63),
      con_nguoi("Tuyet", 30, 100, 1.65)
    };

  std::cout<< "Truoc khi pha, em " << hoi_chi_em[3].ho_ten << " " << (hoi_chi_em[3].zin ? "con zin" : "mat zin" ) <<std::endl; 

  pha_zin(&hoi_chi_em[3]);

  std::cout << "Sau khi pha , em " << hoi_chi_em[3].ho_ten << " " << (hoi_chi_em[3].zin ? "con zin" : "mat zin" ) <<std::endl; 
  
  


  system("pause");
  return 0;
}