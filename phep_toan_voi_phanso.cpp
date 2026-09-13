#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct PS {
  ll tuso;
  ll mauso;
};

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

PS rutgon(PS a) {
  ll ucln = gcd(abs(a.tuso), abs(a.mauso));
  if (ucln == 0)
    return a;
  a.tuso /= ucln;
  a.mauso /= ucln;
  if (a.mauso < 0) {
    a.tuso = -a.tuso;
    a.mauso = -a.mauso;
  }
  return a;
}

PS phansoC(PS a, PS b) {
  // C = (A + B)^2
  PS tong;
  tong.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
  tong.mauso = a.mauso * b.mauso;
  PS c;
  c.tuso = tong.tuso * tong.tuso;
  c.mauso = tong.mauso * tong.mauso;
  return rutgon(c);
}

PS phansoD(PS a, PS b, PS c) {
  PS d;
  d.tuso = a.tuso * b.tuso * c.tuso;
  d.mauso = a.mauso * b.mauso * c.mauso;
  return rutgon(d);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    PS a, b;
    cin >> a.tuso >> a.mauso >> b.tuso >> b.mauso;
    PS c = phansoC(a, b);
    PS d = phansoD(a, b, c);
    cout << c.tuso << "/" << c.mauso << " " << d.tuso << "/" << d.mauso << "\n";
  }
  return 0;
}