#include <bits/stdc++.h>
using namespace std;
class PS {
private:
  long long tu, mau;

  long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }

public:
  void nhap() { cin >> tu >> mau; }

  void rutgon() {
    long long x = gcd(tu, mau);
    tu /= x;
    mau /= x;
  }

  PS operator+(PS other) {
    PS kq;
    kq.tu  = tu * other.mau + other.tu * mau;
    kq.mau = mau * other.mau;
    kq.rutgon();
    return kq;
  }

  void in() { cout << tu << '/' << mau; }
};

int main() {
  PS a, b;
  a.nhap();
  b.nhap();

  PS tong = a + b;
  tong.in();

  system("pause");
  return 0;
}