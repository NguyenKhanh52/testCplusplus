#include <iostream>
using namespace std;

void bubblesort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) { // Neu co n phan tu thi chi can duyet n - 1 lan 
    bool swapped = false;
    // Moi lan xep ta co them 1 phan tu dung vi tri o cuoi cung nen ta chi can duyet n - 1 - i
    for (int j = 0; j < n - 1 - i; j++) {     
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
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

  cout << "Mang truoc khi xep: ";
  Printar(a, n);

  bubblesort(a, n);

  cout << "Mang sau khi xep: ";
  Printar(a, n);

  delete[] a;
  system("pause");
  return 0;
}