#include <iostream>
#include <vector>

using namespace std;

int peak(vector<int> &a, int n) {
  int left = 0, right = n - 1;  // n - 1 vì right là chỉ số cuối cùng
  while (left < right) {
    int mid = left + (right - left) / 2; // tìm đỉnh bằng binary search
    if (a[mid] < a[mid + 1]) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return a[left];
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cout << peak(a, n) << endl;
  }
  system("pause");
  return 0;
}