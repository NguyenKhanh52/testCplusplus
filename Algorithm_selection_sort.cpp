#include <iostream>
using namespace std;

void selectionsort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_id = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[min_id]) {
        min_id = j;
      }
    }
    if (min_id != i) {
      swap(a[i], a[min_id]);
    }
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
  cout << "mang truoc khi xep: ";
  Printar(a, n);

  selectionsort(a, n);

  cout << "mang sau khi xep: ";
  Printar(a, n);

  delete[] a;
  system("pause");
  return 0;
}