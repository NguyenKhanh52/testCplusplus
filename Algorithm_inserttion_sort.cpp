#include <iostream>
using namespace std;

void inserttionsort(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int key = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
}

void Printar(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
}
int main() {
  int n;
  cout << "Nhap so phan tu: ";
  cin >> n;
  int *a = new int[n];
  cout << "Nhap " << n << " phan tu: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "Mang truoc khi xep : ";
  Printar(a, n);

  inserttionsort(a, n);

  cout << "Mang sau khi xep: ";
  Printar(a, n);

  delete[] a;
  system("pause");
  return 0;
}