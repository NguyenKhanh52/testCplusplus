#include <iomanip>
#include <iostream>

using namespace std;
typedef long long ll;

struct pso {
  ll tuso;
  ll mauSo;
};

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  return gcd(a, b % a);
}

pso rutgon(pso a) {
  ll ucln = gcd(a.tuso, a.mauSo);
  a.tuso /= ucln; a.mauSo /= ucln;
  return a;
}

int main() {
  pso a;
  cin >> a.tuso >> a.mauSo;
  a = rutgon(a);
  cout << a.tuso << "/" << a.mauSo << endl;

  system("pause");
  return 0;
}
