#include <bits/stdc++.h>
using namespace std;

struct PS {
  long long tuso;
  long long mauso;
};

long long gcd(long long a, long long b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

PS rutgon(PS a) {
  long long ucln = gcd(a.tuso, a.mauso);
  a.tuso /= ucln;
  a.mauso /= ucln;
  return a;
}

PS congps(PS a, PS b) {
  PS c;
  c.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
  c.mauso = a.mauso * b.mauso;
  return rutgon(c);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    PS a, b;
    cin >> a.tuso >> a.mauso;
    cin >> b.tuso >> b.mauso;
    PS c = congps(a, b);
    cout << c.tuso << "/" << c.mauso << endl;
  }
  system("pause");
  return 0;
}