#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &a, int l, int m, int r) {
  vector<int> L(a.begin() + l, a.begin() + m + 1);
  vector<int> R(a.begin() + m + 1, a.begin() + r + 1);

  int i = 0; // index duyet vector con L
  int j = 0; // index duyet vector con R
  int k = l; // index duyet mang a

  while (i < (int)L.size() && j < (int)R.size()) {
    if (L[i] < R[j]) {
      a[k++] = L[i++];
    } else {
      a[k++] = R[j++];
    }
  }

  // duyet cac phan tu con lai
  while (i < (int)L.size())
    a[k++] = L[i++];
  while (j < (int)R.size())
    a[k++] = R[j++];
}

void mergesort(vector<int> &a, int l, int r) {
  if (l >= r)
    return;

  int m = l + (r - l) / 2; // ko tinh (r + l) / 2 de tranh tran so

  mergesort(a, l, m);
  mergesort(a, m + 1, r);
  Merge(a, l, m, r);
}

void Printar(const vector<int>
                 &a) { // x : a cach viet gon hon for ( int i = 0 ; i < n ; i++)
  for (int x : a)
    cout << x << " "; // x : a => gan cac ptu a vao x roi chay lenh cout
  cout << "\n";
}

int main() {
  int n;
  cout << "Nhap so phan tu: ";
  cin >> n;

  vector<int> a(n);
  cout << "Nhap " << n << " phan tu: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "Mang truoc khi xep: ";
  Printar(a);

  mergesort(a, 0, n - 1);

  cout << "Mang sau khi xep: ";
  Printar(a);
  system("pause");
  return 0;
}