#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int l, int r) {
  int pivot = a[r];
  int i = l - 1;
  for (int j = l; j < r; j++) {
    if (a[j] < pivot) {
      i++;
      swap(a[j], a[i]);
    }
  }
  swap(a[i + 1], a[r]);
  return i + 1;
}

void quicksort(vector<int> &a, int l, int r) {
  if (l >= r)
    return;
  int pivotindex = partition(a, l, r);
  quicksort(a, l, pivotindex - 1);
  quicksort(a, pivotindex + 1, r);
}

void Printar(const vector<int> &a) {
  for (int x : a) {
    cout << x << " ";
  }
  cout << "\n";
}

int main() {
  int n;
  cout << "Nhap so phan tu:";
  cin >> n;
  cout << "Nhap " << n << " phan tu: ";
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "Mang truoc khi xep : ";
  Printar(a);

  quicksort(a, 0, n - 1);
  cout << "Mang sau khi xep :";

  Printar(a);
  system("pause");
  return 0;
}