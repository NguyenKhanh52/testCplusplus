#include <bits/stdc++.h>
#include <filesystem>
using namespace std;

class hcn {
private:
  double dai;
  double rong;

public:
  hcn(double dai, double rong) {
    void check(double a, double b) {
      if (a <= 0 || b <= 0)
        a == 1, b == 1;
    }
  }

  double dientich(double a, double b) { return a * b; }
  double chuvi(double a, double b) { return (a + b) * 2; }
}

int main () {
  hcn hinh1(5, 3), hinh2(-2, 4);
  cout << "dien tich hinh va chu vi 1: " << hinh1.dientich() << " "
       << hinh1.chuvi() << endl;
  cout << "dien tich hinh va chu vi 2: " << hinh2.dientich() << " "
       << hinh2.chuvi() << endl;
}
